#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
///////////////////////////QUESTÃO-5////////////////////////////
int main()
{
    setlocale(LC_ALL,"");

    int cont;
    double vlr_inicial,soma;

    vlr_inicial = 1;
    cont=1;
    soma=1;

    printf("\nNO %d° DIA O MONGE IRÁ RECEBER %.lf\n",cont,vlr_inicial);

    while(cont<64)
    {
        cont++;
        vlr_inicial = vlr_inicial * 2;
        soma = soma + vlr_inicial;

    }

    printf("\nNO FIM O MONGE IRÁ RECEBER %.lf\n",soma);

    return 0;
}
