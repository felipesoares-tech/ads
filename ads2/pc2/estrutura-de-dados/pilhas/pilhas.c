#include <stdio.h>
#include <stdlib.h>

// PILHA DINÂMICA - VETORES

typedef struct NO
{
    int valores;
    struct NO *prox;
} tNO;

typedef struct
{
    tNO *topo; // PILHA ESTÁTICA

} TPilha;

// CRIAR PILHA
TPilha *criar_pilha()
{
    TPilha *ppilha;

    ppilha = calloc(1, sizeof(TPilha)); // ALOCAÇÃO DA MEMÓRIA
    if (ppilha == NULL)
        exit(1);

    ppilha->topo = NULL;

    return ppilha;
}

// EMPILHAR ELEMENTO
void empilhar(TPilha *ppilha, int valor)
{
    tNO *aux = malloc(sizeof(tNO));
    if (aux == NULL)
    {
        printf("Erro na alocacao de no");
        return;
    }
    else
    {
        aux->valores = valor;
        aux->prox = ppilha->topo;
        ppilha->topo = aux;
    }
}

// MOSTRAR ELEMENTOS DA PILHA
void mostrar(TPilha *ppilha)
{
    tNO *aux = ppilha->topo;
    if(aux == NULL){
        printf("A Pilha esta vazia");
        return;
    }else{
        while(aux != NULL){
            printf("%d ", aux->valores);
            aux = aux->prox;
        }
        printf("\n");
    }
}

// DESEMPILHAR ELEMENTO
int desempilhar(TPilha *ppilha)
{
    tNO *aux = ppilha->topo;
    int dado;
    if (aux == NULL)
    {
        printf("A PIlha esta vazia");
        return;
    }
    else
    {
        ppilha->topo = aux->prox;
        aux->prox = NULL;
        dado = aux->valores;
        free(aux);
        return dado;
    }
}

// MENSURAR TAMANHO DA PILHA
int tamanho(TPilha *ppilha)
{
    int cont=0;
    tNO *aux = ppilha->topo;
    if(ppilha == NULL){
        printf("A Pilha esta vazia");
        return;
    }else{
        while(aux != NULL){
            aux = aux->prox;
            cont++;
        }
    }

    return cont;
}

// DESTRUIR PILHA
void destruir_pilha(TPilha *ppilha)
{
    free(ppilha);
}

int main(void)
{
    int op;
    int valor;
    TPilha *ppilha;

    ppilha = criar_pilha();

    printf("\n------ PILHA ESTÁTICA -------");

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
            empilhar(ppilha, valor);
            break;
        case 2:
            valor = desempilhar(ppilha);
            printf("\n Valor: %d \n", valor);
            break;
        case 3:
            valor = tamanho(ppilha);
            printf("\n Tamanho: %d\n", valor);
            break;
        case 4:
            mostrar(ppilha);
            break;
        }

    } while (op != 5);

    destruir_pilha(ppilha);

    return 0;
}