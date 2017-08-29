#include "simulation.h"
#include "clientes.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double simulacao(tServidores **inicio, int nServidores, int tEntrada, int tSaidaServidor) {
  int tempo;
  int clientesAtendidos = 0;
  printf("Tempo de Simulacao (em ms):");
  scanf("%i", &tempo);
  clock_t begin = clock();
  clock_t end = begin;
  double decorrido = ((double)((end - begin)*1000)/CLOCKS_PER_SEC);
  while (decorrido < tempo) {
    end = clock();
    decorrido = ((double)((end - begin)*1000)/CLOCKS_PER_SEC);
    if((decorrido % tEntrada) == 0)
      //entraCliente(inicio, nServidores);                                       
    if((decorrido % tSaidaServidor) == 0)
      //clientesAtendidos += updateServidores(inicio, nServidores);
  }
  return decorrido;
}

void entraCliente(tServidores *sp, int nServidores){
  int menor, aux;
  int menorPos = 0;
  tServidores *sp;

  for(int i = 0; i < nServidores; i++){
    updateServidores(&(sp));
    if(i == 0)menor = qtdClientes(&(sp->fila));
    else{
      aux = qtdClientes(&(sp->fila));
      if(aux < menor){
        menor = aux;
        menorPos = i;
      }
    }
    sp = sp->prox;
    if(sp == NULL) break;
  }
  adicionaClienteFila(&(sp->fila), menor);
}

int updateServidores(tServidores **inicio, int nServidores){
  
}