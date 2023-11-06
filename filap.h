#ifndef FILAP_H
#define FILAP_H

typedef struct {
  int dado;
  int prioridade;
} Item;

typedef struct {
  Item* itens; //Vetor de itens
  int n; //Número atual de itens
  int tamanho; //Tamanho máximo da fila
} FilaP;

FilaP* criarFilaP(int tam);

#endif // FILAP_H
