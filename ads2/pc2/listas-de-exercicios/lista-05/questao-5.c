#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

///5. Escreva uma fun��o que dado um n�mero real passado como par�metro,
///retorne a parte inteira e a parte fracion�ria deste n�mero. Escreva um
///programa que chama esta fun��o.
///Prot�tipo: void frac(float num, int* inteiro, float* frac);

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
