#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
///////////////////////////QUESTÃO-4/////////////////
int main()
{
    int n;

    setlocale(LC_ALL,"");

    printf("INFORME UM NÚMERO: ");
    scanf("%d",&n);

    if(n%2 == 0){
        printf("NÚMERO PAR\n");
        if(n>=0)
            printf("NÚMERO POSITIVO\n");
        else
            printf("NÚMERO NEGATIVO\n");
    }else{
        printf("NÚMERO ÍMPAR\n");
        if(n>=0)
            printf("NÚMERO POSITIVO\n");
        else
            printf("NÚMERO NEGATIVO\n");
    }





    return 0;
}
