#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define TAM 10
//////////////////////////////////////QUESTÃO-7///////////////////////////////////////////
typedef struct
{

    char sexo,estado_civil[40],grau[40];
    int idade,dependentes;
    float salario,patr,calorias;

} dados;

void insertion(dados *vet, int n)
{
    int a,b;
    float aux3,aux6,aux7;
    int aux1,aux5;
    char aux2,aux4[40],aux8[40];

    for (a=0; a<TAM; a++)
    {

        for (b=a; b>0; b--)
        {

            if(vet[b].idade < vet[b-1].idade)
            {

                aux1 = vet[b].idade;
                aux2 = vet[b].sexo;
                aux3 = vet[b].salario;
                strcpy(aux4,vet[b].estado_civil);
                aux5 = vet[b].dependentes;
                aux6 = vet[b].patr;
                aux7 = vet[b].calorias;
                strcpy(aux8,vet[b].grau);

                vet[b].idade = vet[b-1].idade;
                vet[b].sexo = vet[b-1].sexo;
                vet[b].salario = vet[b-1].salario;
                strcpy(vet[b].estado_civil,vet[b-1].estado_civil);
                vet[b].dependentes = vet[b-1].dependentes;
                vet[b].patr = vet[b-1].patr;
                vet[b].calorias = vet[b-1].calorias;
                strcpy(vet[b].grau,vet[b-1].grau);

                vet[b-1].idade = aux1;
                vet[b-1].sexo = aux2;
                vet[b-1].salario = aux3;
                strcpy(vet[b-1].estado_civil,aux4);
                vet[b-1].dependentes = aux5;
                vet[b-1].patr = aux6;
                vet[b-1].calorias = aux7;
                strcpy(vet[b-1].grau,aux8);

            }
            else
                break;

        }

    }
        printf("\n\nORDEM CRESCENTE DOS DADOS!!\n\n");
    for(a=0; a<TAM; a++)
    {
        printf("SEXO = %c\n",vet[a].sexo);
        printf("IDADE = %d\n",vet[a].idade);
        printf("SALÁRIO = R$%.2f\n",vet[a].salario);
        printf("ESTADO CIVIL = %s\n",vet[a].estado_civil);
        printf("NÚMERO DE DEPENDENTES = %d\n",vet[a].dependentes);
        printf("VALOR DE PATRIMONIO = R$%.2f\n",vet[a].patr);
        printf("QUANTIDADE DE CALORIAS ABSORIVDAS POR DIA = %.2f\n",vet[a].calorias);
        printf("GRAU DE INSTRUÇÃO = %s\n\n", vet[a].grau);

    }
}

int main()
{
    setlocale(LC_ALL,"");

    dados reg[40];
    int i;

    for(i=0; i<TAM; i++)
    {
        printf("SEXO >> ");
        reg[i].sexo = getchar();

        printf("IDADE >> ");
        scanf("%d",&reg[i].idade);

        printf("SALÁRIO >> R$");
        scanf("%f",&reg[i].salario);

        printf("ESTADO CIVIL >> ");
        fflush(stdin);
        gets(reg[i].estado_civil);

        printf("NÚMERO DE DEPENDENTES >> ");
        scanf("%d",&reg[i].dependentes);

        printf("VALOR DE PATRIMONIO >> R$");
        scanf("%f",&reg[i].patr);

        printf("QUANTIDADE DE CALORIAS ABSORIVDAS POR DIA >> ");
        scanf("%f",&reg[i].calorias);

        printf("GRAU DE INSTRUÇÃO >> ");
        fflush(stdin);
        gets(reg[i].grau);

    }

    insertion(reg,40);

    return 0;
}
