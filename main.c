#include <stdio.h>
#include <stdlib.h>
#include "filap.h"
#include "inserir.h"
#include "remover.h"
#include "imprimir_heap.h"

int main() {
    printf("Fila de Prioridade\n\n");

    int tam;
    printf("Quantos elementos deseja na fila? ");
    scanf("%d", &tam);

    FilaP* fila = criarFilaP(tam);

    int opcao;
    int dado;
    Item itemRemovido;

    do {
        printf("\nMenu:\n");
        printf("1 - Inserir\n");
        printf("2 - Remover\n");
        printf("3 - Imprimir heap em formato de lista\n");
        printf("4 - Imprimir heap em formato de arvore\n");
        printf("5 - Consultar\n");
        printf("6 - Sair\n");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);
        printf("\n\n");

        switch (opcao) {
            case 1:
                insere(fila);
                break;
            case 2:
                itemRemovido = remover(fila);

                // Verificar se a fila estava vazia
                if (itemRemovido.prioridade == -1) {
                    printf("Fila vazia. Nenhum elemento removido.\n");
                } else {
                    printf("Elemento removido: %d\n", itemRemovido.dado);
                    printf("Prioridade: %d\n", itemRemovido.prioridade);
                }
                break;
            case 3:
                imprimeFilaPDetalhado(fila, 1);
                break;
            case 4:
                imprimeFilaPArvore(fila, 1, 0);
                break;
            case 5:
                printf("Digite o dado a ser consultado: ");
                scanf("%d", &dado);
                consultaDado(fila, dado);
                break;
            case 6:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 6);

    free(fila->itens);
    free(fila);

    return 0;
}
