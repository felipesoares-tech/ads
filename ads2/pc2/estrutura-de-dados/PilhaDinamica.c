#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct NO
{
    int valor;
    struct NO *prox;
    struct NO *ant;
} fila;

fila *inicio, *fim;

void empilhar_elemento(int vlr)
{
    fila *novo_no = (fila *)malloc(sizeof(fila));

    novo_no->valor = vlr;
    novo_no->prox = NULL;

    if (!inicio)
    {
        inicio = novo_no;
        inicio->ant = NULL;
    }
    if (fim)
    {
        fim->prox = novo_no;
        novo_no->ant = fim;
    }

    fim = novo_no;
}

int desempilhar_elemento()
{
    if (inicio == NULL)
    {
        printf("A Pilha está vazia!!");
        return 0;
    }
    int bckp;
    bckp = fim->valor;
    
    fim = fim->ant;
    if(fim)
        fim->prox = NULL;
    else
        inicio = NULL;

    return bckp;
}
void mostrar_elementos(fila *pilha)
{
    if (inicio == NULL)
    {
        printf("A Pilha está vazia!!");
        return;
    }
    while (pilha)
    {
        printf("%d ", pilha->valor);
        pilha = pilha->prox;
    }
    printf("\n");
}

size_t tamanho(fila *pilha)
{
    size_t cont = 0;
    while (pilha)
    {
        pilha = pilha->prox;
        cont++;
    }

    return cont;
}

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "");

    int valor;
    unsigned int op;

    printf("\n------ PILHA DINÂMICA -------");

    do
    {
        printf("\n 1 - Empilhar");
        printf("\n 2 - Desempilhar");
        printf("\n 3 - Tamanho da pilha");
        printf("\n 4 - Mostrar Elementos");
        printf("\n 5 - Sair");
        printf("\n Digite a opção: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("\n Digite o valor: ");
            scanf("%d", &valor);
            empilhar_elemento(valor);
            break;
        case 2:
            printf("\n Valor Removido: %d \n", desempilhar_elemento());
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