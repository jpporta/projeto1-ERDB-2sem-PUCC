typedef struct Clientes
{
    Clientes *ante;
    int pos;
    double tempoEntrada;
    Clientes *prox;
}tClientes;

void adicionaClienteFila(tClientes **incio, int tam, double tempoEntrada);
void removerClienteFila(tClientes **inicio);

int qtdClientes(Clientes *fila);
