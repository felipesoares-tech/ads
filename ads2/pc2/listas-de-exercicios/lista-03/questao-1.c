#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

///*1. Escreva um algoritmo que solicite ao usu�rio a entrada de 10 n�meros, e que exiba
///o somat�rio desses n�meros na tela. Ap�s exibir a soma, o programa deve mostrar
///tamb�m os n�meros que o usu�rio digitou, um por linha.

int main()
{
    setlocale(LC_ALL,"");

    int num[10],soma=0;

    for(int i=0; i<10; i++)
    {
        printf("INFORME O %d� N�MERO: ",i+1);
        scanf("%d",&num[i]);
        soma+=num[i];
    }

    printf("\nSOMAT�RIO DOS N�MEROS DIGITADOS = %d\n", soma);
    printf("N�MEROS DIGITADOS: ");

    for(int i=0; i<10; i++)
    {
        printf("\n%d",num[i]);
    }

    return 0;
}
