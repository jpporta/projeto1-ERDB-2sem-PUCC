typedef struct Servidores
{
  int numero;
  int tamanhoMaxFila;
  double tempoDeEspera;
  Clientes *fila;
  struct Servidores *prox;
} tServidores;

double simulacao(tServidores **inicio, int nServidores, int tEntrada, int tSaidaServidor);

void entraCliente(tServidores **inicio, int nServidores);

int atendeServidores(tServidores **sp);

void geraRelatorio(tServidores **inicio);
