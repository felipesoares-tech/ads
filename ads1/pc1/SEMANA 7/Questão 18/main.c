#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
///////////////////////////QUEST�O 18///////////////////////////
int main()
{
    setlocale(LC_ALL,"Portuguese");

    float vlr;
    int cod;

    printf("INFORME O VALOR DO PRODUTO -> R$");
    scanf("%f",&vlr);

    printf("INFORME O C�DIGO DE ORIGEM: ");
    scanf("%d",&cod);

    if (cod == 1)
        printf("\nPROCED�NCIA: SUL");
    else if (cod == 2)
        printf("\nPROCED�NCIA: NORTE");
    else if (cod == 3)
        printf("\nPROCED�NCIA: LESTE");
    else if (cod == 4)
        printf("\nPROCED�NCIA: OESTE");
    else if (cod == 5 || cod == 6 )
        printf("\nPROCED�NCIA: NORDESTE");
    else if (cod == 7 || cod == 9 || cod == 10)
        printf("\nPROCED�NCIA: SUDESTE");
    else if (cod >= 10 && cod <= 20)
        printf("\nPROCED�NCIA: CENTRO-OESTE");
    else if (cod >= 21 && cod <= 30)
        printf("\nPROCED�NCIA: NORDESTE");
    else printf("\nC�DIGO INV�LIDO !!");


    return 0;
}
