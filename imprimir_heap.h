#ifndef IMPRIMIR_HEAP_H
#define IMPRIMIR_HEAP_H

#include "filap.h"

// Função para imprimir detalhes da fila de prioridade
void imprimeFilaPDetalhado(FilaP* fila, int indice);

// Função para imprimir a fila de prioridade em formato de árvore com identações
void imprimeFilaPArvore(FilaP* fila, int indice, int nivel);

// Função para consultar se um dado existe na fila e imprimir a prioridade associada a ele
void consultaDado(FilaP* fila, int dado);

#endif // IMPRIMIR_HEAP_H
