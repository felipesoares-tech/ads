#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

///7. Fazer um programa para ler um vetor (array unidimensional) de 8 números inteiros.
///Imprimir na tela os conteúdos do vetor lido, a soma de seus elementos e apresentar
///quantos deles são positivos.

int main()
{

    setlocale(LC_ALL,"");

    int vet[8];
    int soma=0;
    int cont=0;

    for(int i=0; i<8; i++)
    {
        printf("INFORME O %d° VALOR: ",i+1);
        scanf("%d",&vet[i]);

        if(vet[i]>0)
            cont++;

        soma+=vet[i];
    }
    printf("\nCONTEUDO DO VETOR LIDO:\n");

    for(int i=0; i<8; i++)
        printf("%d\n",vet[i]);

    printf("\nSOMA DE TODOS OS ELEMENTOS = %d\n",soma);

    if(cont>0)
        printf("\n%d NÚMEROS SÃO POSITIVOS\n",cont);
    else
        printf("\nNENHUM NÚMERO INFORMADO É POSITIVO!!");

        return 0;
}
