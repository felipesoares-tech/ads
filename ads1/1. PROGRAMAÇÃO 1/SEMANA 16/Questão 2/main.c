#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/////////////////////////////////QUEST�O-2/////////////////////////////////
/*Fa�a um programa contendo uma fun��o que receba dois n�meros positivos por par�metros e
retorne a soma dos N n�meros inteiros existentes entre eles.*/

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

    printf("INFORME O PRIMEIRO N�MERO >> ");
    scanf("%d",&num1);

    printf("INFORME O PRIMEIRO N�MERO >> ");
    scanf("%d",&num2);

    printf("\n\nRESULTADO = %d\n",soma(num1,num2));

    return 0;
}
