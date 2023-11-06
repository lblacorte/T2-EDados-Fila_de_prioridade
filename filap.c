#include <stdio.h>
#include <stdlib.h>
#include "filap.h"

FilaP* criarFilaP(int tam) {
  FilaP* fila = (FilaP*)malloc(sizeof(FilaP));
  fila->itens = (Item*)malloc((tam + 1) * sizeof(Item)); //É melhor começar pelo índice [1] para facilitar os cálculos, por isso tam+1
  fila->n = 0;
  fila->tamanho = tam;
  return fila;
}
