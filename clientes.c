void adicionaClienteFila(tClientes **incio, int tam){
    if(((*inicio)->prox) == NULL){
        (*incio)->prox = (*tServidor)malloc(sizeof(tServidor));
        (*inicio)->prox->ante = *inicio;
        inicio = &((*inicio)->prox);
        (*inicio)->prox = NULL;
        (*incio)->pos = tam;
    }
    else
        adicionaClienteFila(&((*inicio)->prox), tam);
}
int qtdClientes(Clientes *fila){
    if(fila == NULL) return 0;
    return qtdClientes(fila->prox);
}