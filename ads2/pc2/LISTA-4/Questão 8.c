#include <stdio.h>
#include <stdlib.h>

///8. Escreva um programa para calcular o tamanho de uma string usando somente
///ponteiros.

int main()
{
    char string[]= {"Felipe Soares"};
    char* p = string;
    int i=0;

    for(; *p; p++,i++){}

        printf("TAMANHO DA STRING = %d",i);

    return 0;
}
