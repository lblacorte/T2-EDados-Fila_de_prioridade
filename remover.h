#ifndef REMOVER_H
#define REMOVER_H

#include "filap.h"

// Função para realizar o ajuste após a remoção de um elemento na fila de prioridade
void ajuste_de_remocao(FilaP* fila, int pai);

// Função para remover o elemento de maior prioridade da fila de prioridade
Item remover(FilaP* fila);

#endif // REMOVER_H
