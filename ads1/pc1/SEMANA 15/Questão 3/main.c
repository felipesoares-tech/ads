#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//////////////////////////////////////QUEST�O-3///////////////////////////////////////////
typedef struct
{
    int id,atr;
    float imp;
} reg;

int main()
{
    setlocale(LC_ALL,"");

    reg x[500];
    int i,j,k;
    float acm=0,tot=0,imp;

    for(i=0; ; i++)
    {
        printf("\nPROPRIET�RIO [%d]\n\n",i+1);

        printf("IDENTIFICA��O -> ");
        scanf("%d",&x[i].id);

        if(x[i].id == 0)
            break;

        printf("QTD DE MESES EM ATRASO -> ");
        scanf("%d",&x[i].atr);

        printf("VALOR DO IMPOSTO -> ");
        scanf("%f",&x[i].imp);

    }

    printf("\n\nRESULTADOS:\n");

    for(j=0; j<i; j++)
    {
        printf("\nPROPRIET�RIO [%d]\n\n",j+1);

        printf("IDENTIFICA��O DO IM�VEL = %d\n",x[j].id);
        printf("QTD DE MESES EM ATRASO = %d\n",x[j].atr);
        printf("VALOR DO IMPOSTO = %.2f\n",x[j].imp);
        acm = x[j].imp;
        for(k=0; k<x[j].atr; k++)
            acm= acm + 0.02*acm;

        imp = acm - x[j].imp;
        printf("MULTA A SER PAGA = R$%.2f\n",imp);

        tot = tot + acm;
    }

    printf("\n\nTOTAL ARRECADADO PELO MUNIC�PIO = R$%.2f\n",tot);


    return 0;
}
