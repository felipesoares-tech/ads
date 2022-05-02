#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 5

///6. Faça um programa que controla o consumo de energia dos eletrodomésticos de uma casa e:
///• Crie e leia 5 eletrodomésticos que contém nome (máximo 15 letras), potência
///(real, em kW) e tempo ativo por dia (real, em horas).
///• Leia um tempo t (em dias), calcule e mostre o consumo total na casa e o
///consumo relativo de cada eletrodoméstico (consumo/consumo total) nesse
///período de tempo. Apresente este último dado em porcentagem.

typedef struct
{
    char nome[15];
    float pot,consumo;
    float tmp_atvd;
    float tot_cons_apr;
}itens;

typedef struct
{
    itens eletros[TAM];
    int tot_dias;
    float tot_cons;
}casa;

void buff(void)
{
    setbuf(stdin, NULL);
}

int main()
{
    casa x;
    int i;

    x.tot_cons=0;

    setlocale(LC_ALL,"");

    for (i=0; i<TAM; i++)
    {
        printf("\n>>%dº ELETRODOMÉSTICO<<\n\n",i+1);
        buff();
        printf("INFORME O NOME: ");
        fgets(x.eletros[i].nome,15,stdin);

        printf("INFORME A POTÊNCIA (kW): ");
        scanf("%f",&x.eletros[i].pot);

        printf("INFORME O TEMPO DE ATIVIDADE (HH): ");
        scanf("%f",&x.eletros[i].tmp_atvd);

        x.eletros[i].consumo = x.eletros[i].pot*x.eletros[i].tmp_atvd;
    }

    printf("INFORME A QUANTIDADE DE DIAS: ");
    scanf("%d",&x.tot_dias);

    for(i=0; i<TAM; i++)
    {
        x.eletros[i].tot_cons_apr = x.eletros[i].consumo*x.tot_dias;
        x.tot_cons+=x.eletros[i].tot_cons_apr;
    }

    printf("\n***CONSUMO TOTAL = %.2fkWh***\n\n",x.tot_cons);

    printf(">>CONSUMO RELATIVO DE CADA ELETRODOMÉSTICO<<\n\n");

    for(i=0; i<TAM; i++)
        printf("%s -> %.2f%%\n",x.eletros[i].nome,(x.eletros[i].tot_cons_apr/x.tot_cons)*100);

    return 0;
}
