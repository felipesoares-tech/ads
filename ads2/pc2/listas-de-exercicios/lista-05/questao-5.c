#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

///5. Escreva uma função que dado um número real passado como parâmetro,
///retorne a parte inteira e a parte fracionária deste número. Escreva um
///programa que chama esta função.
///Protótipo: void frac(float num, int* inteiro, float* frac);

void frac(float a, int*inteiro, float*fracionado)
{
    float temp=a;

    *inteiro = temp;
    *fracionado = temp - *inteiro;

    printf("PARTE INTEIRA = %d\n",*inteiro);
    printf("PARTE FRACIONADA = %.2f\n",*fracionado);

    free(inteiro);
    free(fracionado);
}

int main ()
{
    setlocale(LC_ALL,"");

    float num=7.6,*pnum_f=malloc(sizeof(float));
    int *pnum_i=malloc(sizeof(int));

    frac(num,pnum_i,pnum_f);

    return 0;
}
