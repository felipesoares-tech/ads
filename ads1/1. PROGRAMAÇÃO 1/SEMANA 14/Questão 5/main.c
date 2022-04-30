#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define TAM 1000
////////////////////////////////QUESTÃO-05////////////////////////////////////////////
typedef struct
{
    char tip,sbc;
    float vlr;
    int ra;

} regA;

int main()
{
    setlocale(LC_ALL,"");

    printf("\nDIGITE 0 NO RA DO ALUNO PARA FINALIZAR A LEITURA!!\n\n");

    regA x[1000];
    int i,j;
    int a=0,b=0,c=0,d=0;
    float tot=0;

    for(i=0; i<TAM; i++)
    {

        printf("INFORME O RA DO ALUNO >> ");
        scanf("%d",&x[i].ra);
        if(x[i].ra == 0)
            break;


        fflush(stdin);

        printf("\nTIPO DE PARTICIPAÇÃO:\n\n");
        printf("[A] -- 1 CURSO -- R$ 30,00\n");
        printf("[B] -- 2 CURSO -- R$ 60,00\n");
        printf("[C] -- 3 CURSO -- R$ 90,00\n");
        printf("[D] -- OUTROS -- R$ 100,00\n\n");

        printf("ESCOLHA >> ");
        x[i].tip = getchar();
        fflush(stdin);
        printf("ALUNO É SÓCIO DO SBC ??\n");
        printf("[S] -- SIM\n[N] -- NÃO!\n\n");

        printf("ESCOLHA >> ");
        x[i].sbc = getchar();
        fflush(stdin);

        if(x[i].tip == 'A' || x[i].tip == 'a')
        {
            a++;
            if(x[i].sbc == 'S' || x[i].sbc == 's')
                x[i].vlr = 0.5 * 30;
            else
                x[i].vlr = 30;
        }
        else
        {
            if(x[i].tip == 'B' || x[i].tip == 'b')
            {
                b++;
                if(x[i].sbc == 'S' || x[i].sbc == 's')
                    x[i].vlr = 0.5 * 60;
                else
                    x[i].vlr = 60;
            }
            else
            {
                if(x[i].tip == 'C' || x[i].tip == 'c')
                {
                    c++;
                    if(x[i].sbc == 'S' || x[i].sbc == 's')
                        x[i].vlr = 0.5 * 90;
                    else
                        x[i].vlr = 90;
                }
                else
                {
                    if(x[i].tip == 'D' || x[i].tip == 'd')
                    {
                        d++;
                        if(x[i].sbc == 'S' || x[i].sbc == 's')
                            x[i].vlr = 0.5 * 100;
                        else
                            x[i].vlr = 100;
                    }
                }
            }
        }
        tot = tot + x[i].vlr;
    }

    printf("VALORES A SEREM PAGOS:\n\n");

    for(j=0; j<i; j++)
    {
        printf("RA %d\n",x[j].ra);
        printf("VALOR A SER PAGO = %.2f\n",x[j].vlr);
    }
    printf("\nTOTAL ARRECADADO COM O EVENTO = %.2f\n\n",tot);
    printf("QUANTIDADE DE PESSOAS QUE SE INSCREVERAM NO CURSO [A] = %d\n",a);
    printf("QUANTIDADE DE PESSOAS QUE SE INSCREVERAM NO CURSO [B] = %d\n",b);
    printf("QUANTIDADE DE PESSOAS QUE SE INSCREVERAM NO CURSO [C] = %d\n",c);
    printf("QUANTIDADE DE PESSOAS QUE SE INSCREVERAM NO CURSO [D] = %d\n",d);

    return 0;
}
