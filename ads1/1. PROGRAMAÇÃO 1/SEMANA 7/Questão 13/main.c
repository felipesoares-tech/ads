#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
///////////////////////////QUESTÃO 13///////////////////////////
int main()
{
    setlocale(LC_ALL,"");

    char tipo;
    float comb,qtkms,consumo,qtdlt;

    printf("INFORME O TIPO DO CARRO -> ");
    scanf("%c",&tipo);

    printf("INFORME QUANTOS QUILOMETROS FORAM RODADOS -> ");
    scanf("%f",&qtkms);

    printf("INFORME O VALOR DO LITRO DE COMBUSTÍVEL -> R$");
    scanf("%f",&comb);

    if(tipo == 'a' || tipo == 'A')  //16 KMS COM 1 LITRO
    {

        qtdlt = qtkms/16;
        consumo = qtdlt * comb;

        printf("\nVALOR DA VIAGEM CARRO (A) R$%.2f",consumo);

    }
    else
    {

        if(tipo == 'b' || tipo == 'B')  //12 KMS COM 1 LITRO
        {

            qtdlt = qtkms/12;
            consumo = qtdlt * comb;

            printf("\nVALOR DA VIAGEM CARRO (B) R$%.2f",consumo);

        }
        else
        {

            if(tipo == 'c' || tipo == 'C')  //8 KM COM 1 LITRO
            {

                qtdlt = qtkms/8;
                consumo = qtdlt * comb;

                printf("\nVALOR DA VIAGEM CARRO (C) R$%.2f",consumo);

            }
        }
    }

    return 0;
}
