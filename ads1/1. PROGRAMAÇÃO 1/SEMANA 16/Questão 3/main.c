#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/////////////////////////////////QUEST�O-3/////////////////////////////////
/*Crie um algoritmo contendo uma fun��o que receba como par�metro um valor inteiro e positivo N
e retorne o valor de S, obtido pelo seguinte c�lculo:*/

float doido(float a)
{
    int fatorial (int n)
    {
        int fat;

        for(fat=1; n>=1; n--)
            fat = fat * n;

        return fat;
    }

    int i;
    float res=1.00;


    for(i=1; i<=a; i++)
        res = res + 1.00/fatorial(i);

    return res;
}

int main()
{
    setlocale(LC_ALL,"");

    int num;

    printf("DIGITE UM N�MERO INTEIRO E POSITIVO -> ");
    scanf("%d",&num);

    printf("\nRESULTADO = %.2f\n",doido(num));


    return 0;
}
