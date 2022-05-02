#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

///8. Faça um algoritmo que carregue um vetor com 15 posições, calcule e mostre o
///maior elemento do vetor e em que posição esse elemento se encontra e o menor
///elemento do vetor e em que posição esse elemento se encontra.

int main()
{

    setlocale(LC_ALL,"");

    int vet[15],maior,menor,i,x=0,y=0;

    for(i=0; i<15; i++)
    {
        printf("INFORME O %d° ELEMENTO: ",i+1);
        scanf("%d",&vet[i]);
    }

    maior = vet[0];
    menor = vet[0];

    for(i=0; i<15; i++)
    {

        if(vet[i]>maior)
        {
            maior=vet[i];
            x=i;
        }

        else if(vet[i]<menor)
        {
            menor=vet[i];
            y=i;
        }
    }

    printf("\nO MAIOR É %d POSIÇÃO %d, O MENOR É %d POSIÇÃO %d\n",maior,x,menor,y);

    return 0;
}
