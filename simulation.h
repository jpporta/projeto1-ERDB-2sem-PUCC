typedef struct Servidores {
  int numero;
  Clientes *fila;
  struct Servidores *prox;
} tServidores;

double simulacao(tServidores **inicio, int nServidores, int tEntrada, int tSaidaServidor);
void entraCliente(tServidores **inicio, int nServidores);
int updateServidores(tServidores **inicio, int nServidores);
