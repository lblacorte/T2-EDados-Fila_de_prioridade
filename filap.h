#ifndef FILAP_H
#define FILAP_H

// Estrutura para representar um item na fila de prioridade
typedef struct {
  int dado;         // Dado associado ao item
  int prioridade;   // Prioridade do item na fila
} Item;

// Estrutura para representar a fila de prioridade
typedef struct {
  Item* itens;      // Vetor de itens
  int n;            // Número atual de itens na fila
  int tamanho;      // Tamanho máximo da fila
} FilaP;

// Função para criar uma nova fila de prioridade com o tamanho especificado
FilaP* criarFilaP(int tam);

#endif // FILAP_H
