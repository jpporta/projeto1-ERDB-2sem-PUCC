typedef struct Clientes{
    Clientes *ante;
    int pos;
    Clientes *prox;
}tClientes;

void adicionaClienteFila(tClientes **incio, int tam);
int qtdClientes(Clientes *fila);