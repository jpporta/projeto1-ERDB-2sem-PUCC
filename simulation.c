#include "simulation.h"
#include "clientes.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double simulacao(tServidores **inicio, int nServidores, int tEntrada, int tSaidaServidor)
{
  int tempo;
  int clientesAtendidos = 0;
  clock_t begin = clock();
  clock_t end = begin;
  double decorrido = ((double)((end - begin)*1000)/CLOCKS_PER_SEC);


  printf("Tempo de Simulacao (em ms):");
  scanf("%i", &tempo);


  while (decorrido < tempo)
  {
    end = clock();
    system("clear");
    decorrido = ((double)((end - begin)*1000)/CLOCKS_PER_SEC);
    showServidores(decorrido, )
    if((decorrido % tEntrada) == 0)
    entraCliente(inicio, nServidores, decorrido);

    if((decorrido % tSaidaServidor) == 0)
    clientesAtendidos += atendeServidores(inicio, nServidores);

  }

  return decorrido;

}

void entraCliente(tServidores **sp, int nServidores, double tempoEntrada)
{
  int menor, aux, i;
  int menorPos = 0;
  for(i = 0; i < nServidores; i++){
    if(i == 0)  menor = qtdClientes(&((*sp)->fila));
    else
    {
      aux = qtdClientes(&((*sp)->fila));
      if(aux < menor)
      {
        menor = aux;
        menorPos = i;
      }
    }
    *sp = (*sp)->prox;
    if(sp == NULL) break;
  }
  if(sp != NULL)
  adicionaClienteFila(&((*sp)->fila), menor, tempoEntrada);
}
int atendeServidores(tServidores **sp){
  if((*sp) == NULL) return 0;
  removeCliente(&((*sp)->fila));
  return 1 + atendeServidores(&((*sp)->prox));
}

void geraRelatorio(tServidores **inicio)
{

}
