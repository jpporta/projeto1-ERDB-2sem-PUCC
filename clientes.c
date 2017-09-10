#include "clientes.h"
#include <stdio.h>
#include <stdlib.h>

void adicionaClienteFila(tClientes **incio, int tam, double tempoEntrada);
{

    if(((*inicio)->prox) == NULL) //Verifica se é o final da fila
    {
        (*inicio)->prox = (*tServidor)malloc(sizeof(tServidor)); //Aloca um novo Cliente

        (*inicio)->prox->ante = *inicio;  //O novo final da fila sabe quem está em sua frente

        inicio = &((*inicio)->prox);  //Anda o ponteiro

        (*inicio)->tempoEntrada = tempoEntrada;

        (*inicio)->prox = NULL;   //Não há proximo

        (*inicio)->pos = tam;    //Posição dele na fila

    }

    else  adicionaClienteFila(&((*inicio)->prox), tam);

}

int qtdClientes(Clientes *fila)
{
    if(fila == NULL) return 0;

    return (1 + qtdClientes(fila->prox));
}

void removerClienteFila(tClientes **inicio){
  if((*inicio) == NULL) return;
  tClientes *aux = *inicio;
  *inicio = &((*inicio)->prox);
  (*inicio)->ante = NULL;
  free(aux);
}
