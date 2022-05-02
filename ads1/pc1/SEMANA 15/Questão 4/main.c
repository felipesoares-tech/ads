#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define TAM 1230
/////////////////QUESTÃO-4/////////////////////////
typedef struct
{
    char nome[50],tel[15],cpf[12],end[50];
    int insm;
    float totprod;
    int dia,mes,ano;
} cop;

void insertion(cop *vet, int n)
{
    int a,b;
    int aux2,aux3,aux4,aux5;
    float aux6,x,acm=0;
    char aux7[50],aux8[50],aux9[50],aux10[50];

    for (a=0; a<TAM; a++)
    {
        for (b=a; b>0; b--)
        {
            if(vet[b].insm > vet[b-1].insm)
            {
                aux2 = vet[b].insm;
                aux3 = vet[b].dia;
                aux4 = vet[b].mes;
                aux5 = vet[b].ano;
                aux6 = vet[b].totprod;
                strcpy(aux7,vet[b].nome);
                strcpy(aux8,vet[b].tel);
                strcpy(aux9,vet[b].cpf);
                strcpy(aux10,vet[b].end);

                vet[b].insm = vet[b-1].insm;
                vet[b].dia = vet[b-1].dia;
                vet[b].mes = vet[b-1].mes;
                vet[b].ano = vet[b-1].ano;
                vet[b].totprod = vet[b-1].totprod;
                strcpy(vet[b].nome,vet[b-1].nome);
                strcpy(vet[b].tel,vet[b-1].tel);
                strcpy(vet[b].cpf,vet[b-1].cpf);
                strcpy(vet[b].end,vet[b-1].end);

                vet[b-1].insm = aux2;
                vet[b-1].dia = aux3;
                vet[b-1].mes = aux4;
                vet[b-1].ano = aux5;
                vet[b-1].totprod = aux6;
                strcpy(vet[b-1].nome, aux7);
                strcpy(vet[b-1].tel, aux8);
                strcpy(vet[b-1].cpf, aux9);
                strcpy(vet[b-1].end, aux10);
            }
            else
                break;

        }
    }
    for(a=0,b=20; a<10; a++,b=b-2)
    {

        printf("NOME = %s\n",vet[a].nome);
        printf("TELEFONE = %s\n",vet[a].tel);
        printf("CPF = %s\n",vet[a].cpf);
        printf("ENDEREÇO = %s\n",vet[a].end);
        printf("INSUMOS ENTREGUES = %d\n",vet[a].insm);
        printf("PRODUÇÃO ENTREGE = R$%.2f\n",vet[a].totprod);
        printf("DATA DE ASSOCIAÇÃO = %d/%d/%d\n",vet[a].dia,vet[a].mes,vet[a].ano);
        x = (b/100.00) * vet[a].totprod;
        printf("VALOR RECEBIDO = R$%.2f\n\n",x);
        acm = acm + x;
    }

    printf("QUANTIA NECESSÁRIA PARA REALIZAR A PROMOÇÃO = R$%.2f\n",acm);
}

int main()
{
    setlocale(LC_ALL,"");

    cop x[1230];
    int i;

    for(i=0; i<TAM; i++)
    {
        printf("\nFUNCIONÁRIO [%d]\n\n",i+1);

        printf("NOME -> ");
        fflush(stdin);
        gets(x[i].nome);

        printf("TELEFONE -> ");
        fflush(stdin);
        gets(x[i].tel);

        printf("CPF -> ");
        fflush(stdin);
        gets(x[i].cpf);

        printf("ENDEREÇO -> ");
        fflush(stdin);
        gets(x[i].end);

        printf("INSUMOS ENTREGUES -> ");
        scanf("%d",&x[i].insm);

        printf("PRODUÇÃO ENTREGE >> R$");
        scanf("%f",&x[i].totprod);

        printf("DATA EM QUE SE TORNOU ASSOCIADO (dd/mm/aaaa) -> ");
        scanf("%d/%d/%d",&x[i].dia,&x[i].mes,&x[i].ano);

    }
    printf("\nCOOPERADOS CONTEMPLADOS!!\n\n");

    insertion(x,1230);

    return 0;
}
