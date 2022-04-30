#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
///////////////////////////////////QUESTÃO 5//////////////////////////////
int main()
{
    setlocale(LC_ALL,"");

    char tipo,refr,clas[7];
    float vlr,vlr_adc,vlr_imp,prec_custo,desc,vlr_final;
    char clas1[7]="BARATO",clas2[7]="NORMAL",clas3[5]="CARO";

    printf("INFORME O TIPO DE PRODUTO !\n\n");
    printf("[A] -> ALIMENTAÇÃO\n");
    printf("[L] -> LIMPEZA\n");
    printf("[V] -> VESTUÁRIO\n\n");

    printf("ESCOLHA -> [ ]\b\b");
    scanf("%c%*c", &tipo);

    printf("\nO PRODUTO PRECISA DE REFRIGERAÇÃO?\n\n");
    printf("[S] -> SIM\n");
    printf("[N] -> NÃO\n");

    printf("\nESCOLHA -> [ ]\b\b");
    scanf("%c", &refr);

    printf("\nINFORME O VALOR DO PRODUTO -> R$");
    scanf("%f", &vlr);

    if(refr == 'N')
    {
        if (tipo == 'A' && vlr < 15)
            vlr_adc = 2;
        else if (tipo == 'A' && vlr >= 15)
            vlr_adc = 5;
        else if (tipo == 'L' && vlr < 10)
            vlr_adc = 1.50;
        else if (tipo == 'L' && vlr >= 10)
            vlr_adc = 2.50;
        else if (tipo == 'V' && vlr < 30)
            vlr_adc = 3;
        else if (tipo == 'V' && vlr >= 30)
            vlr_adc = 2.50;
    }
    else
    {
        if(refr == 'S' && tipo == 'A')
            vlr_adc = 8;
        else
            vlr_adc = 0;
    }

    if (vlr < 25)
        vlr_imp = 0.05 * (vlr + vlr_adc);
    else
        vlr_imp = 0.08 * (vlr + vlr_adc);

    prec_custo = vlr_imp + vlr;

    if (tipo == 'A' || refr == 'N')
        desc = 0;
    else
        desc = 0.03 * vlr;

    vlr_final = (prec_custo + vlr_adc) - desc;

    if (vlr_final < 50)
        strcpy(clas,clas1);
    else if (vlr_final >= 50 && vlr_final < 100)
        strcpy(clas,clas2);
    else
        strcpy(clas,clas3);

        printf("\nVALOR ADICIONAL -> R$%.2f\n", vlr_adc);
        printf("VALOR IMPOSTO -> R$%.2f\n", vlr_imp);
        printf("PREÇO DE CUSTO -> R$%.2f\n", prec_custo);
        printf("VALOR DE DESCONTO -> R$%.2f\n", desc);
        printf("NOVO PREÇO (DESCONTO INCLUSO) -> R$%.2f\n", vlr_final);
        printf("CLASSIFICAÇÃO -> %s\n", clas);

    return 0;
}
