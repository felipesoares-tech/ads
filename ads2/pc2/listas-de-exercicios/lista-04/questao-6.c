#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>

///6. Elabore um algoritmo que dados dois lados de um tri�ngulo ret�ngulo, calcule
///a respectiva hipotenusa.

int main ()
{

    float c1,c2,h;

    printf("INFORME O VALOR DO PRIMEIRO CATETO: ");
    scanf("%f",&c1);

    printf("INFORME O VALOR DO SEGUNDO CATETO: ");
    scanf("%f",&c2);


    h=(pow(c1,2) + pow(c2,2));

    printf("O VALOR DA HIPOTENUSA � = %.2f",pow(h,0.5));



    return 0;
}
