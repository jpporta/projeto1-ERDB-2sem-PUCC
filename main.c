/***************************************************************
Nomes: João Pedro Porta, Paulo Jansey Figueiredo. RAs: 16039778,
Opcionais Funcionando:
Valor do Projeto: _________ pontos.
***************************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef struct Servidores {
  int numero;
  // Clientes *fila;
  float taxa;
  int tempo;
  struct Servidores *prox;
} tServidores;

int main() {
  int nservidores, i;
  tServidores *inicio, *sp;
  inicio = (tServidores *)malloc(sizeof(tServidores));
  sp = inicio;

  printf("Numero de Servidores?\n");
  scanf("%i", &nservidores);
  for (i = 0; i < nservidores; i++) {
    printf("Servidor %i\n\tTaxa de chegada dos clientes:", i + 1);
    scanf("%f", &(sp->taxa));
    printf("\tTempo de atendimento do clientes (Em ms):");
    scanf("%i", &(sp->tempo));
    if (i == nservidores - 1)
      sp->prox = NULL;
    else {
      (sp->prox) = (tServidores *)malloc(sizeof(tServidores));
      sp = sp->prox;
    }
  }

  // tbigData bigData = simulacao(&inicio);
  // geraRelatorio(bigData);
  return 0;
}
