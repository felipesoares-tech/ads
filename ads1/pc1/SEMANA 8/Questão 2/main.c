#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
///////////////////////////////////QUESTÃO 2//////////////////////////////
int main()
{
    setlocale(LC_ALL,"");

    float vlr_compr,vlr_venda;
    char nome[20];

    printf("INFORME O NOME DO PRODUTO -> ");
    fgets(nome,20,stdin);

    printf("INFORME O VALOR DA COMPRA -> R$");
    scanf("%f", &vlr_compr);

    if (vlr_compr < 10)
        vlr_venda = (0.7 * vlr_compr) + vlr_compr;
    else if (vlr_compr >= 10 && vlr_compr <= 29.99)
        vlr_venda = (0.5 * vlr_compr) + vlr_compr;
    else if (vlr_compr >= 30 && vlr_compr <= 50)
        vlr_venda = (0.4 * vlr_compr) + vlr_compr;
    else
        vlr_venda = (0.3 * vlr_compr) + vlr_compr;

        printf("\nNOME DO PRODUTO: %s\nVALOR DE VENDA: %.2f", nome, vlr_venda);

    return 0;
}
