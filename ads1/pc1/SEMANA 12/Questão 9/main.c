#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
////////////////////////////////QUESTÃO-09////////////////////////////////////////////
int main()
{
    setlocale(LC_ALL,"");

    int conta[10000];
    float saldo[10000],soma_1,soma_2,saldo_tot;
    char nome[100];
    int i,cont,tot;

    cont=0;
    soma_1=0;
    soma_2=0;
    tot=0;

    for(i=0; i<=9999; i++)
    {

        printf("INFORME O NÚMERO DA CONTA -> ");
        scanf("%d",&conta[i]);

        if(conta[i] == -999)
            break;



        printf("INFORME O SALDO DA CONTA -> ");
        scanf("%f",&saldo[i]);

        printf("INFORME O NOME DO TITULAR -> ");
        scanf("%*c%s",nome);

        tot++;
    }

    for(i=0; i<=9999; i++)
    {
        if(conta[i] != -999)
        {

            printf("\nNÚMERO DA CONTA -> %d",conta[i]);
            printf("\nSALDO DA CONTA -> R$%.2f",saldo[i]);
            if(saldo[i] > 0)
            {
                printf("\nSALDO POSITIVO !\n");
                soma_1 = soma_1 + saldo[i];
            }

            else
            {
                printf("\nSALDO NEGATIVO !\n");
                soma_2 = soma_2 + saldo[i];
                cont++;
            }

        }else
        break;
    }

    saldo_tot = soma_1 + soma_2;

    printf("\nTOTAL DE CLIENTES COM O SALDO NEGATIVO -> %d",cont);
    printf("\nTOTAL DE CLIENTES DA AGÊNCIA -> %d",tot);
    printf("\nSALDO TOTAL DA AGÊNCIA -> R$%.2f",saldo_tot);

    return 0;
}
