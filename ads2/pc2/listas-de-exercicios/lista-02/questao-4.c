#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
///////////////////////////QUEST�O-4/////////////////
int main()
{
    int n;

    setlocale(LC_ALL,"");

    printf("INFORME UM N�MERO: ");
    scanf("%d",&n);

    if(n%2 == 0){
        printf("N�MERO PAR\n");
        if(n>=0)
            printf("N�MERO POSITIVO\n");
        else
            printf("N�MERO NEGATIVO\n");
    }else{
        printf("N�MERO �MPAR\n");
        if(n>=0)
            printf("N�MERO POSITIVO\n");
        else
            printf("N�MERO NEGATIVO\n");
    }





    return 0;
}
