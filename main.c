/***************************************************************
Nomes: João Pedro Porta, Paulo Jansey Figueiredo. RAs: 16039778,
Opcionais Funcionando:
Valor do Projeto: _________ pontos.
***************************************************************/

#include "simulation.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int nservidores = 3, i;
  int taxaCliente = 100, tempoAtendimento = 1000;
  double tempoDecorrido;
  tServidores *inicio, *sp;
  inicio = (tServidores *)malloc(sizeof(tServidores));
  sp = inicio;

  /***********************************************************
                        Argumentos
                -n100 para 100 Servidores
                -t12 para um novo cliente a cada 12ms
                -a20 para tempo de atendimento do servidor de 20ms
*/

  for (i = 1; i < argc; i++) {
    switch (argv[i][1]) {
    case 'n':
      nservidores = atoi(&argv[i][2]);
      break;
    case 't':
      taxaCliente = atoi(&argv[i][2]);
      break;
    case 'a':
      tempoAtendimento = atoi(&argv[i][2]);
      break;
    }
  }
  /***********************************************************/
  // printf("%i\n", nservidores);
  for (i = 0; i < nservidores; i++) {
    if (i == nservidores - 1)
      sp->prox = NULL;
    else {
      (sp->prox) = (tServidores *)malloc(sizeof(tServidores));
      sp = sp->prox;
    }
  }

  tempoDecorrido = simulacao(&inicio, nservidores, taxaCliente, tempoAtendimento);
  // geraRelatorio(inicio);
  return 0;
}
