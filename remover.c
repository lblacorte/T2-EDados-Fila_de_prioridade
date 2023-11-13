#include <stdio.h>
#include <stdlib.h>
#include "filap.h"

void ajuste_de_remocao(FilaP* fila, int pai){
  int filho_esq, filho_dir, maior;

    while (1) {
      maior = pai;
      filho_esq = 2 * pai ;
      filho_dir = 2 * pai + 1;
      // acha os filhos atrasves das propriedades do heap
      if (filho_esq < fila->n && fila->itens[filho_esq].prioridade > fila->itens[maior].prioridade){
        maior = filho_esq;
      }
      //verfca se o filho_esq tem uma prioridade maior
      if (filho_dir < fila->n && fila->itens[filho_dir].prioridade > fila->itens[maior].prioridade){
        maior = filho_dir;
      }
      //verfca se o filho_dir tem uma prioridade maior
      if (maior == pai){
        break;
      }
      //se nenhum dos filhos é maior que o pai nao faz nada
      Item aux = fila->itens[pai];
      fila->itens[pai] = fila->itens[maior];
      fila->itens[maior] = aux;
      //se algum for maior troca com o pai
      pai = maior;
    }
}
Item remover(FilaP* fila) {
    if (fila->n == 0) {
    printf("Fila vazia\n");
    }
    int indice_maior_prioridade = 1;

    // Salvar o item de maior prioridade para retornar no final
    Item item_removido = fila->itens[indice_maior_prioridade];

    // Substituir o item de maior prioridade pelo último item na fila
    fila->itens[indice_maior_prioridade] = fila->itens[fila->n];
    fila->n--; // Decrementar o número de itens na fila

    //chama a função para ajustar o heap
    ajuste_de_remocao(fila, indice_maior_prioridade);

    return item_removido;
}
