#include <stdio.h>
#include <stdlib.h>
#include "imprimir_heap.h"

void imprimeFilaPDetalhado(FilaP* fila, int indice) {
    if (fila->n == 0) {
        printf("Fila vazia\n");
        return;
    }

    if (indice <= fila->n) {
        int filho_esq = 2 * indice;
        int filho_dir = 2 * indice + 1;

        // Imprime informações sobre o nó pai e depois seus filhos
        printf("Noh %d: ", fila->itens[indice].dado);

        if (filho_esq <= fila->n) {
            printf("filho esq: %d, ", fila->itens[filho_esq].dado);
        } else {
            printf("filho esq: vazio, ");
        }

        if (filho_dir <= fila->n) {
            printf("filho dir: %d\n", fila->itens[filho_dir].dado);
        } else {
            printf("filho dir: vazio\n");
        }

        // Chama recursivamente para os filhos
        imprimeFilaPDetalhado(fila, filho_esq);
        imprimeFilaPDetalhado(fila, filho_dir);
    }
}

void imprimeFilaPArvore(FilaP* fila, int indice, int nivel) {
    if (fila->n == 0) {
        printf("Fila vazia\n");
        return;
    }

    if (indice <= fila->n) {
        int filho_esq = 2 * indice;
        int filho_dir = 2 * indice + 1;

        // Chama recursivamente para o filho da direita
        imprimeFilaPArvore(fila, filho_dir, nivel + 1);

        // Identação para representar o nível na árvore
        for (int i = 0; i < nivel; i++) {
            printf("   ");
        }

        // Imprime informações sobre o nó pai
        printf("%d\n", fila->itens[indice].dado);

        // Chama recursivamente para o filho da esquerda
        imprimeFilaPArvore(fila, filho_esq, nivel + 1);
    }
}

void consultaDado(FilaP* fila, int dado) {
    int encontrado = 0;

    for (int i = 1; i <= fila->n; i++) {
        if (fila->itens[i].dado == dado) {
            printf("Dado %d encontrado na posicao %d da fila. Prioridade: %d\n", dado, i, fila->itens[i].prioridade);
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("Dado %d nao encontrado na fila.\n", dado);
    }
}

