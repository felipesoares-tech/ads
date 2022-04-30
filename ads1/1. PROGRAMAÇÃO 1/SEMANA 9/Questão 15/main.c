#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
///////////////////////////////////QUESTÃO 15//////////////////////////////
int main()
{
    setlocale(LC_ALL,"");

    int num,cont,fat,cond;

    cont=0;

    printf("INFORME UM NÚMERO INTERIO -> ");
    scanf("%d", &num);

    if(num == 0)
    {
        fat = 1;
    }else{


    cond=num-1;
    fat=num;




    while(cont < cond)       //SUPONDO O VALOR 5 DE ENTRADA
    {
        cont++;
        num --;
        fat = fat *num;
    }

    }

    printf("\nFATORIAL: %d\n",fat);

    return 0;
}
