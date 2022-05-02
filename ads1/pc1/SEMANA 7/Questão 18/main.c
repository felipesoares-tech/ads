#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
///////////////////////////QUESTÃO 18///////////////////////////
int main()
{
    setlocale(LC_ALL,"Portuguese");

    float vlr;
    int cod;

    printf("INFORME O VALOR DO PRODUTO -> R$");
    scanf("%f",&vlr);

    printf("INFORME O CÓDIGO DE ORIGEM: ");
    scanf("%d",&cod);

    if (cod == 1)
        printf("\nPROCEDÊNCIA: SUL");
    else if (cod == 2)
        printf("\nPROCEDÊNCIA: NORTE");
    else if (cod == 3)
        printf("\nPROCEDÊNCIA: LESTE");
    else if (cod == 4)
        printf("\nPROCEDÊNCIA: OESTE");
    else if (cod == 5 || cod == 6 )
        printf("\nPROCEDÊNCIA: NORDESTE");
    else if (cod == 7 || cod == 9 || cod == 10)
        printf("\nPROCEDÊNCIA: SUDESTE");
    else if (cod >= 10 && cod <= 20)
        printf("\nPROCEDÊNCIA: CENTRO-OESTE");
    else if (cod >= 21 && cod <= 30)
        printf("\nPROCEDÊNCIA: NORDESTE");
    else printf("\nCÓDIGO INVÁLIDO !!");


    return 0;
}
