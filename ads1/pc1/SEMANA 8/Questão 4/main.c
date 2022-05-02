#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
///////////////////////////////////QUESTÃO 4//////////////////////////////
int main()
{
    setlocale(LC_ALL,"");

    float a,b,c,vlr_piso,metros,tint,qtd,vlr_tintaint,vlr_tintaext,desp;
    int esc1,esc2,esc3;

    printf("INFORME O COMPRIMENTO -> ");
    scanf("%f", &a); //A CORRESPONDE AO COMPRIMENTO

    printf("INFORME A LARGURA -> ");
    scanf("%f", &b); //B CORRESPONDE A LARGURA

    printf("INFORME A ALTURA -> ");
    scanf("%f", &c);// C CORRESPONED A ALUTRA

    printf("\nAGORA, ESCOLHA O TIPO DE PISO!!\n\n");
    printf("PISO 1 -> R$24,00 POR m²\n");
    printf("PISO 2 -> R$31,00 POR m²\n");
    printf("PISO 3 -> R$55,00 POR m²\n\n");

    printf("ESCOLHA: ");
    scanf("%d", &esc1);


    printf("\nESCOLHA O TIPO DE TINTA A SER UTILIZADA INTERNAMENTE!!\n\n");

    printf("TINTA 1 -> R$22,00 POR LITRO\n");
    printf("TINTA 2 -> R$47,00 POR LITRO\n\n");

    printf("ESCOLHA: ");
    scanf("%d", &esc2);

    printf("\nESCOLHA O TIPO DE TINTA A SER UTILIZADA EXTERNAMENTE!!\n\n");

    printf("TINTA 1 -> R$22,00 POR LITRO\n");
    printf("TINTA 2 -> R$47,00 POR LITRO\n\n");

    printf("ESCOLHA: ");
    scanf("%d", &esc3);

    metros = a*b; // QUANTIDADE DE METROS QUADRADOS QUE O CHÃO POSSUI
    tint = (a*c*2)+(b*c*2); //QUANTIDADE DE METROS QUADRADOS DE TODAS AS PAREDES
    qtd = tint/2; //CÁLCULO DA QUANTIDADE DE LITROS DE TINTA NECESSÁRIO PARA PINTAR AS PAREDES

    switch(esc1)
    {
    case 1:
        vlr_piso = 24 * metros;
        break;
    case 2:
        vlr_piso = 31 * metros;
        break;
    case 3:
        vlr_piso = 55 * metros;
        break;
    }

    switch(esc2)
    {
    case 1:
        vlr_tintaint = qtd * 22;
        break;
    case 2:
        vlr_tintaint = qtd * 47;
        break;
    }

        switch(esc3)
    {
    case 1:
        vlr_tintaext = qtd * 22;
        break;
    case 2:
        vlr_tintaext = qtd * 47;
        break;
    }


    desp = vlr_tintaint + vlr_tintaext + vlr_piso;
    printf("\nCUSTO DE MATERIAL -> R$%.2f\n", desp);


    return 0;
}
