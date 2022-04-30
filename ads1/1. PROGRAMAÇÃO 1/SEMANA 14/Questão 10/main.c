#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100
#include <locale.h>
//////////////////////////////////////QUESTÃO-10///////////////////////////////////////////
typedef struct
{

    int n_inscr,qtd_ht,qtd_ht_ext,op;
    char nome[50];
    float sal_n,sal_e,sal_b,sal_l,ded_inss,vlr_ht;

} contra;

int main()
{

    setlocale(LC_ALL,"");

    contra x[100];
    int i;

    for(i=0; i<TAM; i++)
    {

        printf("\nFUNCIONÁRIO [%d]\n\n",i+1);

        printf("NOME -> ");
        fflush(stdin);
        gets(x[i].nome);

        printf("NUMERO DA INSCRIÇÃO -> ");
        scanf("%d",&x[i].n_inscr);

        printf("QUANTIDADE DE HORAS TRABALHADAS -> ");
        scanf("%d",&x[i].qtd_ht);

        printf("QUANTIDADE DE HORAS EXTRAS -> ");
        scanf("%d",&x[i].qtd_ht_ext);

        printf("VALOR DA HORA TRABALHADA >> R$");
        scanf("%f",&x[i].vlr_ht);

        printf("\nESCOLHA AS CLASSES\n\n");
        printf("[1] PARA CLASSE 1\n[2] PARA CLASSE 2\n\n");
        printf("OPÇÃO >> ");
        scanf("%d",&x[i].op);

        x[i].sal_n = x[i].vlr_ht * x[i].qtd_ht;
        x[i].sal_e = (1.3 * x[i].vlr_ht)*x[i].qtd_ht_ext+x[i].sal_n;

        if(x[i].op == 1)
            x[i].sal_b = 1.3*x[i].sal_e;
        else if(x[i].op == 2)
            x[i].sal_b = 1.3*x[i].sal_e;

        x[i].ded_inss = (0.08 * x[i].sal_b);
        x[i].sal_l = x[i].sal_b - x[i].ded_inss;

    }
    printf("\n\nCONTRA CHEQUES!!\n\n");
    for(i=0; i<TAM; i++)
    {

        printf("NUMERO DA INSCRIÇÃO = %d\n",x[i].n_inscr);
        printf("NOME = %s\n",x[i].nome);
        printf("SALÁRIO HORAS NORMAIS = R$%.2f\n",x[i].sal_n);
        printf("SALÁRIO HORAS EXTRAS = R$%.2f\n",x[i].sal_e);
        printf("SALÁRIO BRUTO = R$%.2f\n",x[i].sal_b);
        printf("DEDUÇÃO INSS = R$%.2f\n",x[i].ded_inss);
        printf("SALÁRIO LÍQUIDO = R$%.2f\n",x[i].sal_l);

    }

    return 0;
}
