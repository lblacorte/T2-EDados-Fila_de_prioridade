Item remover(FilaP* fila) {
    int indice_maior_prioridade = 1;
    // Encontrar o índice do elemento de maior prioridade na fila
    for (int i = 2; i <= fila->n; i++) {
        if (fila->itens[i].prioridade < fila->itens[indice_maior_prioridade].prioridade) {
            indice_maior_prioridade = i;
        }
    }
    
    // Salvar o item de maior prioridade para retornar no final
    Item item_removido = fila->itens[indice_maior_prioridade];
    
    // Substituir o item de maior prioridade pelo último item na fila
    fila->itens[indice_maior_prioridade] = fila->itens[fila->n];
    fila->n--; // Decrementar o número de itens na fila
    
    return item_removido;
}
