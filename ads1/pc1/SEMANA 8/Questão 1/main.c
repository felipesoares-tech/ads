#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
///////////////////////////////////QUEST�O 1//////////////////////////////
int main()
{
    setlocale(LC_ALL,"");

    float vlr_entr,res;
    int cod;

    printf("INFORME O VALOR DO PRODUTO -> R$");
    scanf("%f", &vlr_entr);

    printf("\nESCOLHA UMA DAS CONDI��ES ABAIXO !!\n\n");
    printf("[1] � VISTA EM DINHEIRO OU CHEQUE -> 10%% DE DESCONTO\n");
    printf("[2] � VISTA NO CART�O DE D�BITO -> 7,5%% DE DESCONTO\n");
    printf("[3] � VISTA NO CART�O DE CR�DITO -> 5%% DE DESCONTO\n");
    printf("[4] EM DUAS VEZES -> PRE�O NORMAL DA TABELA SEM JUROS\n");
    printf("[5] EM QUATRO VEZES -> PRE�O NORMAL DA TABELA MAIS JUROS DE 9,5%%\n\n");

    printf("C�DIGO -> ");
    scanf("%d", &cod);

    switch(cod)
    {
    case 1:
        res = 0.9 * vlr_entr;
        break;
    case 2:
        res = 0.925 * vlr_entr;
        break;
    case 3:
        res = 0.95 * vlr_entr;
        break;
    case 4:
        res = vlr_entr/2;
        printf("\nVALOR A SER PAGO -> DUAS PARCELAS DE R$%.2f SEM JUROS !!\n", res);
        break;
    case 5:
        res = (vlr_entr/4) * 1.095;
        printf("\nVALOR A SER PAGO -> QUATRO PARCELAS DE R$%.2f COM JUROS !!\n", res);
        break;
    default:
        printf("\nC�DIGO INV�LIDO !!");

    }

    if(cod == 1 || cod == 2 || cod == 3 || cod == 4 || cod == 5)
        printf("\nVALOR A SER PAGO -> R$%.2f\n", res);


    return 0;
}
