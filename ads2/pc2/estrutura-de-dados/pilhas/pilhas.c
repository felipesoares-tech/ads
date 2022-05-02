#include <stdio.h>
#include <stdlib.h>

// PILHA ESTÁTICA - VETORES

#define MAX 5

typedef struct{
	int elementos[MAX]; // PILHA ESTÁTICA
	int topo;
} TPilha;

// CRIAR PILHA
TPilha * criar_pilha(){
	TPilha *ppilha;	

	ppilha = calloc(1, sizeof(TPilha)); //ALOCAÇÃO DA MEMÓRIA
	if(ppilha == NULL)
		exit(1);

	ppilha->topo = 0;

	return ppilha;
}

// EMPILHAR ELEMENTO  
void empilhar(TPilha *ppilha, int valor){
	int i = ppilha->topo;

        printf("A PILHA ESTÁ CHEIA!");
    if(i >= MAX){
        return;
    }

	ppilha->elementos[i] = valor;
	ppilha->topo = ppilha->topo + 1;

}

void mostrar(TPilha *ppilha){
    int i;
    for(i=0; i<MAX; i++){
        printf("%d ",ppilha->elementos[i]);
        ppilha->topo = ppilha->topo + 1;
    }
    ppilha->topo=ppilha->topo-i;
}

// DESEMPILHAR ELEMENTO  
int desempilhar(TPilha *ppilha){
	int i;

    if(ppilha->topo<=0){
        printf("A PILHA ESTÁ VAZIA!!");
        return 0;
    }

	ppilha->topo = ppilha->topo - 1;

	i = ppilha->topo;

	return ppilha->elementos[i];
}

// MENSURAR TAMANHO DA PILHA
int tamanho(TPilha *ppilha){
	return ppilha->topo;
}

//DESTRUIR PILHA
void destruir_pilha(TPilha *ppilha) {
	free(ppilha);
}

int main(void) {
  int op;
  int valor;
  int i ;
  TPilha *ppilha;

  ppilha = criar_pilha();
  
  printf("\n------ PILHA ESTÁTICA -------");

  do{
      printf("\n 1 - Empilhar");
      printf("\n 2 - Desempilhar");
      printf("\n 3 - Tamanho da pilha");
      printf("\n 4 - Mostrar Elementos");
      printf("\n 5 - Sair");
      printf("\n Digite a opção: ");
      scanf("%d", &op);

      switch(op){
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

  } while(op != 5);

  destruir_pilha(ppilha);

  return 0;
}