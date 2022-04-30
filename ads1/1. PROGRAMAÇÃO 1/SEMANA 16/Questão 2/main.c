#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/////////////////////////////////QUESTÃO-2/////////////////////////////////
/*Faça um programa contendo uma função que receba dois números positivos por parâmetros e
retorne a soma dos N números inteiros existentes entre eles.*/

int soma(int a, int b)
{
    int i,x=0;

    for(i=a+1; i<b; i++)
            x = x + i;

    return x;

}

int main()
{
    setlocale(LC_ALL,"");

    int num1,num2;

    printf("INFORME O PRIMEIRO NÚMERO >> ");
    scanf("%d",&num1);

    printf("INFORME O PRIMEIRO NÚMERO >> ");
    scanf("%d",&num2);

    printf("\n\nRESULTADO = %d\n",soma(num1,num2));

    return 0;
}
