#ifndef INSERIR_H
#define INSERIR_H

#include "filap.h"

// Função para realizar o ajuste após a inserção de um elemento na fila de prioridade
void ajuste_insere(FilaP* fila, int filho);

// Função para inserir um elemento na fila de prioridade
void insere(FilaP* fila);

#endif // INSERIR_H
