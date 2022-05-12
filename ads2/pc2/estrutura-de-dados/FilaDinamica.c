#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct NO
{
    int valor;
    struct NO *prox;
} fila;

fila *inicio, *fim;

void enfileirar_elemento(int vlr)
{
    fila *novo_no = (fila *)malloc(sizeof(fila));

    novo_no->valor = vlr;
    novo_no->prox = NULL;

    if (!inicio)
        inicio = novo_no;
    if (fim)
        fim->prox = novo_no;

    fim = novo_no;
}

int desenfileirar_elemento()
{
    if (inicio == NULL)
    {
        printf("A Fila está vazia!!");
        return 0;
    }
    int bckp;
    bckp = inicio->valor;
    inicio = inicio->prox;

    return bckp;
}
void mostrar_elementos(fila *fila)
{
    if (inicio == NULL)
    {
        printf("A Fila está vazia!!");
        return;
    }
    while (fila)
    {
        printf("%d ", fila->valor);
        fila = fila->prox;
    }
    printf("\n");
}

size_t tamanho(fila *fila){
    size_t cont=0;
    while (fila)
    {
        fila = fila->prox;
        cont++;
    }

    return cont;
}

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "");

    int valor;
    unsigned int op;

     printf("\n------ FILA DINÂMICA -------");

    do
    {
        printf("\n 1 - Enfilerar");
        printf("\n 2 - Desenfileirar");
        printf("\n 3 - Tamanho da fila");
        printf("\n 4 - Mostrar Elementos");
        printf("\n 5 - Sair");
        printf("\n Digite a opção: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("\n Digite o valor: ");
            scanf("%d", &valor);
            enfileirar_elemento(valor);
            break;
        case 2:
            printf("\n Valor Removido: %d \n", desenfileirar_elemento());
            break;
        case 3:
            printf("\n Tamanho: %zd\n", tamanho(inicio));
            break;
        case 4:
            mostrar_elementos(inicio);
            break;
        }

    } while (op != 5);
  
    return 0;
}