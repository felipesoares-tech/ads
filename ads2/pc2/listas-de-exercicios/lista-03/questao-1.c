#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

///*1. Escreva um algoritmo que solicite ao usuário a entrada de 10 números, e que exiba
///o somatório desses números na tela. Após exibir a soma, o programa deve mostrar
///também os números que o usuário digitou, um por linha.

int main()
{
    setlocale(LC_ALL,"");

    int num[10],soma=0;

    for(int i=0; i<10; i++)
    {
        printf("INFORME O %dº NÚMERO: ",i+1);
        scanf("%d",&num[i]);
        soma+=num[i];
    }

    printf("\nSOMATÓRIO DOS NÚMEROS DIGITADOS = %d\n", soma);
    printf("NÚMEROS DIGITADOS: ");

    for(int i=0; i<10; i++)
    {
        printf("\n%d",num[i]);
    }

    return 0;
}
