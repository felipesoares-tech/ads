#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

///5. Faça um procedimento que calcule e mostre a área de um trapézio. A área do
///trapézio é dado por A = (b + B) ∗ h/2 , onde b é base menor, B é base maior e h
///é altura do trapézio.

void calc(float a,float b,float c)
{
    setlocale(LC_ALL,"");

    float A;

    A = (a+b) * (c/2);

    printf("\nÁREA = %.2f\n",A);
}

int main ()
{

    setlocale(LC_ALL,"");

    float b,B,h;

    printf("INFORME O VALOR DA BASE MENOR: ");
    scanf("%f",&b);

    printf("INFORME O VALOR DA BASE MAIOR: ");
    scanf("%f",&B);

    printf("INFORME O VALOR DA ALTURA: ");
    scanf("%f",&h);

    calc(b,B,h);


    return 0;
}
