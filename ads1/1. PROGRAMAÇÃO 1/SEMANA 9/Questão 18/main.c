#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL,"");

    float h;
    int qtd,cont;

    cont=0;
    h=0;

    printf("INFORME A QUANTIDADE DE TERMOS -> ");
    scanf("%d", &qtd);

    while(cont<qtd)
    {
    cont++;
    h = h + (1.00/cont);
    }

    printf("\nO VALOR DE H É --> %.2f\n", h);


    return 0;
}
