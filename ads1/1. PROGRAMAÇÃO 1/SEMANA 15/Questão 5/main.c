#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define TAM 15
//////////////////////////////////////QUESTÃO-5///////////////////////////////////////////
typedef struct
{
    char nome[50];
    float vendas[3];
    int pts[3];
    int totpts;

} func;

int main()
{
    setlocale(LC_ALL,"");

    func x[15];
    int i,j,k,acm=0;
    float acm2=0;
    int t_mes[3]= {0,0,0};
    int vet2[15];
    char mes[3][50]= {"NOVEMBRO","DEZEMBRO","JANEIRO"};

    for(i=0; i<TAM; i++)
    {

        printf("\nFUNCIONÁRIO [%d]\n\n",i+1);

        printf("NOME -> ");
        fflush(stdin);
        gets(x[i].nome);

        for(j=0; j<=2; j++)
        {
            printf("\nVENDAS DO MÊS DE %s\n\n",mes[j]);

            printf("VALOR VENDIDO >> R$");
            scanf("%f",&x[i].vendas[j]);

            x[i].pts[j] = x[i].vendas[j]/100;
            acm = acm + x[i].pts[j];
            acm2 = acm2 + x[i].vendas[j];

        }
        x[i].totpts = acm;

        acm=0;
    }

    printf("\n>>>>>>PONTUAÇÃO GERAL EM TRÊS MESES<<<<<<\n");
    for(i=0; i<TAM; i++)
    {
        printf("\n%s\n\n",x[i].nome);
        printf("TOTAL DE PONTOS = %d\n",x[i].totpts);

    }

    printf("\n>>>>>>PONTUAÇÃO GERAL EM TODOS OS MESES<<<<<<\n");

    for(k=0; k<3; k++)
    {
        for(i=0; i<TAM; i++)
            t_mes[k] = t_mes[k] + x[i].pts[k];

        printf("TOTAL DE PONTOS, MÊS DE %s = %d\n",mes[k],t_mes[k]);

    }

    int cont=0;

    for(i=0; i<TAM; i++)
    {
        for(j=0; j<3; j++)
        {
            for(k=0; k<3; k++)
            {
                if(x[i].pts[j]>=x[i].pts[k])
                    cont++;
            }
            if(cont == 3)
            {
                vet2[i] = x[i].pts[j];
                cont=0;
            }
            else
                cont=0;
        }
    }

    cont=0;

    for(i=0; i<TAM; i++)
    {
        for(j=0; j<TAM; j++)
        {
            for(k=0; k<3; k++)
            {
                if(vet2[i]>=x[j].pts[k])
                    cont++;

            }
        }

        printf("\nMAIOR PONTUAÇÃO ATINGIDA NOS 3 MESES");
        if(cont == 45){
            printf("\nNOME = %s, PONTOS = %d\n",x[i].nome,vet2[i]);
            cont=0;
        }else
            cont =0;
    }

    printf("TOTAL VENDIDO = R$%.2f\n",acm2);


    return 0;
}
