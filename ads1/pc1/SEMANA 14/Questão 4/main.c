#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <locale.h>
#define TAM 500
////////////////////////////////QUESTÃO-04////////////////////////////////////////////

typedef struct
{
    char email[50];
    int cod,horas;
    float vlr;
    char op;

} cad;

int main()
{
    cad x[500];
    int i;

    setlocale(LC_ALL,"");

    for(i=0; i<TAM; i++)
    {
        printf("\nCLIENTE [%d]\n\n",i+1);

        printf("CÓDIGO -> ");
        scanf("%d",&x[i].cod);

        printf("E-MAIL -> ");
        fflush(stdin);
        gets(x[i].email);

        printf("QTD DE HORAS DE ACESSO -> ");
        scanf("%d",&x[i].horas);
        fflush(stdin);
        printf("USUÁRIO POSSUÍ PÁGINA ??\n[S] -> SIM [N] -> NÃO");
        printf("\n\nOPÇÃO: ");
        x[i].op = getchar();

        if(x[i].horas<=20)
            x[i].vlr = 35;
        else
            x[i].vlr = 35 + ((x[i].horas-20)*2.50);

        if(x[i].op == 'S' || x[i].op == 's')
            x[i].vlr = x[i].vlr + 40;
    }

    for(i=0; i<TAM; i++)
    {
        printf("\nCLIENTE [%d]\n",i+1);
        printf("VALOR A SER PAGO = R$%.2f\n",x[i].vlr);

    }

    return 0;

}
