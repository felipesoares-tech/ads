#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
///////////////////////////QUEST�O 19///////////////////////////
int main()
{
    setlocale(LC_ALL,"Portuguese");

    char nome[15],tipo;
    int qt_diar;
    float cons,vlr_diar,sub_tot,tax_serv,total,diar_a,diar_b,diar_c,diar_d;

    diar_a = 150;
    diar_b = 100;
    diar_c = 75;
    diar_d = 50;

    printf("TIPO DE APARTAMENTO -> ");
    scanf("%c",&tipo);

    printf("NOME DO H�SPEDE -> ");
    scanf("%s",&nome);

    printf("QUANTIDADE DE DI�RIAS -> ");
    scanf("%d",&qt_diar);

    printf("CONSUMO INTERNO -> R$");
    scanf("%f",&cons);

    if (tipo == 'a' || tipo == 'A')
    {

        vlr_diar = diar_a * qt_diar;
        sub_tot = vlr_diar + cons;
        tax_serv = 0.1 * sub_tot;
        total = sub_tot + tax_serv;

        printf("\nNOME DO H�SPEDE -> %s",nome);
        printf("\nTIPO DE APARTAMENTO -> %c",tipo);
        printf("\nQUANTIDADE DE DI�RIAS -> %d",qt_diar);
        printf("\nVALOR UNIT�RIO DE DI�RIA -> %.2f",diar_a);
        printf("\nVALOR TOTAL DE DI�RIAS -> %.2f",vlr_diar);
        printf("\nVALOR DO CONSUMO INTERNO -> %.2f",cons);
        printf("\nSUB TOTAL -> R$%.2f",sub_tot);
        printf("\nTAXA DE SERVI�O -> R$%.2f",tax_serv);
        printf("\nTOTAL GERAL -> R$%.2f\n\n",total);


    }
    else
    {
        if (tipo == 'b' || tipo == 'B')
        {

            vlr_diar = diar_b * qt_diar;
            sub_tot = vlr_diar + cons;
            tax_serv = 0.1 * sub_tot;
            total = sub_tot + tax_serv;

            printf("\nNOME DO H�SPEDE -> %s",nome);
            printf("\nTIPO DE APARTAMENTO -> %c",tipo);
            printf("\nQUANTIDADE DE DI�RIAS -> %d",qt_diar);
            printf("\nVALOR UNIT�RIO DE DI�RIA -> %.2f",diar_b);
            printf("\nVALOR TOTAL DE DI�RIAS -> %.2f",vlr_diar);
            printf("\nVALOR DO CONSUMO INTERNO -> %.2f",cons);
            printf("\nSUB TOTAL -> R$%.2f",sub_tot);
            printf("\nTAXA DE SERVI�O -> R$%.2f",tax_serv);
            printf("\nTOTAL GERAL -> R$%.2f\n\n",total);

        }
        else
        {
            if (tipo == 'c' || tipo == 'C')
            {

                vlr_diar = diar_c * qt_diar;
                sub_tot = vlr_diar + cons;
                tax_serv = 0.1 * sub_tot;
                total = sub_tot + tax_serv;

                printf("\nNOME DO H�SPEDE -> %s",nome);
                printf("\nTIPO DE APARTAMENTO -> %c",tipo);
                printf("\nQUANTIDADE DE DI�RIAS -> %d",qt_diar);
                printf("\nVALOR UNIT�RIO DE DI�RIA -> %.2f",diar_c);
                printf("\nVALOR TOTAL DE DI�RIAS -> %.2f",vlr_diar);
                printf("\nVALOR DO CONSUMO INTERNO -> %.2f",cons);
                printf("\nSUB TOTAL -> R$%.2f",sub_tot);
                printf("\nTAXA DE SERVI�O -> R$%.2f",tax_serv);
                printf("\nTOTAL GERAL -> R$%.2f\n\n",total);

            }
            else
            {
                if (tipo == 'd' || tipo == 'D')
                {

                    vlr_diar = diar_d * qt_diar;
                    sub_tot = vlr_diar + cons;
                    tax_serv = 0.1 * sub_tot;
                    total = sub_tot + tax_serv;

                    printf("\nNOME DO H�SPEDE -> %s",nome);
                    printf("\nTIPO DE APARTAMENTO -> %c",tipo);
                    printf("\nQUANTIDADE DE DI�RIAS -> %d",qt_diar);
                    printf("\nVALOR UNIT�RIO DE DI�RIA -> %.2f",diar_d);
                    printf("\nVALOR TOTAL DE DI�RIAS -> %.2f",vlr_diar);
                    printf("\nVALOR DO CONSUMO INTERNO -> %.2f",cons);
                    printf("\nSUB TOTAL -> R$%.2f",sub_tot);
                    printf("\nTAXA DE SERVI�O -> R$%.2f",tax_serv);
                    printf("\nTOTAL GERAL -> R$%.2f\n\n",total);


                }
            }
        }
    }

    return 0;
}
