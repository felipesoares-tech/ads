#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
///////////////////////////QUEST�O 12///////////////////////////
int main()
{
    setlocale(LC_ALL,"");

    int n;

    printf("INFORME UM N�MERO INTEIRO: ");
    scanf("%d",&n);

    if(n%2 != 0)
        printf("O N�MERO INFORMADO � �MPAR !");
    else
        printf("O N�MERO INFORMADO � PAR");

    return 0;
}
