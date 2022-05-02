#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
///////////////////////////QUESTÃO 12///////////////////////////
int main()
{
    setlocale(LC_ALL,"");

    int n;

    printf("INFORME UM NÚMERO INTEIRO: ");
    scanf("%d",&n);

    if(n%2 != 0)
        printf("O NÚMERO INFORMADO É ÍMPAR !");
    else
        printf("O NÚMERO INFORMADO É PAR");

    return 0;
}
