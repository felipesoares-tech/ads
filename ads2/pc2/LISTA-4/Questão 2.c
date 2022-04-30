#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

///2. Faça um programa que carregue um vetor com 15 elementos inteiros e
///verifique a existência de elementos iguais a 30, mostrando as posições em que
///esses elementos apareceram.

void buff(void)
{
    setbuf(stdin,NULL);
}

int main()
{
    setlocale(LC_ALL,"");

    int vet[15]={10,6,8,24,30,16,24,30,16,23,30,14,7,8,15};

    for(int i=0;i<15;i++)
    {
        if(vet[i]==30)
            printf("POSIÇÃO = %d\n",i);
    }

}
