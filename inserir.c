#include <stdio.h>
#include <stdlib.h>
#include "inserir.h"

void ajuste_insere(FilaP* fila, int filho) {
    int pai = filho / 2;
    Item temp = fila->itens[filho];

    while (filho > 1 && fila->itens[pai].prioridade < temp.prioridade) {
        fila->itens[filho] = fila->itens[pai];
        filho = pai;
        pai = filho / 2;
    }

    fila->itens[filho] = temp; // Opcional, apenas para representar que o filho continua o mesmo
}

void insere(FilaP* fila) {
    int prioridade;
    int dado;

    if (fila->n < fila->tamanho) {
        do {
            printf("Digite a prioridade a ser inserida (deve ser maior que 0): ");
            scanf("%d", &prioridade);
        } while (prioridade <= 0); // Garante que a prioridade seja maior que 0

        printf("Digite o valor a ser inserido: ");
        scanf("%d", &dado);

        fila->n++;
        fila->itens[fila->n].prioridade = prioridade;
        fila->itens[fila->n].dado = dado;
        ajuste_insere(fila, fila->n);
    } else {
        printf("Fila cheia\n");
    }
}
