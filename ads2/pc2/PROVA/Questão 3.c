#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void calc_hexa(float lado)
{
    float area,perimetro;

    area = (3*(lado*lado)*1.732050807)/2;
    perimetro = 6*lado;

    printf("ÁREA = %.2f\n",area);
    printf("PERÍMETRO = %.2f\n",perimetro);


}

int main ()
{
    setlocale(LC_ALL,"");

    float lado;

    do
    {
        printf("INFORME O VALOR DO LADO: ");
        scanf("%f",&lado);

        if(lado>0)
            calc_hexa(lado);


    }
    while(lado>0);


    return 0;
}
