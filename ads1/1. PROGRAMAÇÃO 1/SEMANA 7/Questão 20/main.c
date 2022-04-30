#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
///////////////////////////QUESTÃO 20///////////////////////////
int main()
{
    setlocale(LC_ALL,"Portuguese");

    int prato,bebida,sobremesa;
    float cal_pra,cal_sob,cal_beb,total;

    printf(">>>>RESTAURANTE CODE BLOCKS<<<<");
    printf("\n\n>CARDÁPIO<\n\n");
    printf("PRATOS:\n\n");
    printf("1 -> SALDA\n");
    printf("2 -> PEIXE\n");
    printf("3 -> FRANGO\n");
    printf("4 -> CARNE\n\n");

    printf("ESCOLHA -> [ ]\b\b");
    scanf("%d",&prato);

    printf("\nSOBREMESA:\n\n");
    printf("1 -> ABACAXI\n");
    printf("2 -> SORVETE\n");
    printf("3 -> MOUSSE\n");
    printf("4 -> BOLO\n\n");

    printf("ESCOLHA -> [ ]\b\b");
    scanf("%d",&sobremesa);

    printf("\nBEBIDA:\n\n");
    printf("1 -> CHÁ\n");
    printf("2 -> SUCO\n");
    printf("3 -> REFRI\n");
    printf("4 -> CERVEJA\n\n");

    printf("ESCOLHA -> [ ]\b\b");
    scanf("%d",&bebida);

    if (prato == 1)
        cal_pra = 180;
    else if(prato == 2)
        cal_pra = 230;
    else if(prato == 3)
        cal_pra = 250;
    else
        cal_pra = 350;

    if (sobremesa == 1)
        cal_sob = 75;
    else if(sobremesa == 2)
        cal_sob = 110;
    else if(sobremesa == 3)
        cal_sob = 170;
    else
        cal_sob = 200;

    if (bebida == 1)
        cal_beb = 20;
    else if(bebida == 2)
        cal_beb = 70;
    else if(bebida == 3)
        cal_beb = 100;
    else
        cal_beb = 50;

    total = cal_pra + cal_beb + cal_sob;

    printf("\nTOTAL DE CALORIAS: %.2f",total);

    return 0;
}
