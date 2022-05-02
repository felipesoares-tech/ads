#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*5. Escreva um programa que carregue uma matriz 12 × 4
com os valores das vendas de uma loja, em que cada
linha represente um mês do ano, e cada coluna, uma
semana do mês. Para fins de simplificação considere

que cada mês possui somente 4 semanas. Calcule e
imprima:
• Total vendido em cada mês do ano;
• Total vendido em cada semana durante todo o ano;
• Total vendido no ano.*/

int main()
{
    setlocale(LC_ALL, "");

    float mat[12][4];
    float acm[12],tot=0;
    float *p_mat;

    p_mat=mat;

    for(int i=0; i<12; i++)
        acm[i]=0;

    for(int i=0; i<12; i++){
        printf("\nMÊS = %d\n\n",i+1);
        for(int j=0; j<4; j++)
        {
            printf("SEMANA [%d]: ",j+1);
            scanf("%f",&mat[i][j]);

            acm[i]+=mat[i][j];
        }
    }
    printf("\n");
    for(int i=0; i<12; i++){
        printf("TOTAL VENDIDO NO MÊS [%d] = %.2f\n",i+1,acm[i]);
        tot+=acm[i];
    }
    printf("\n");
    for(int i=0; i<48; i++,p_mat++)
        printf("VENDAS NA SEMANA [%d] = %.2f\n",i+1,*p_mat);

    printf("\nTOTAL VENDIDO NO ANO = %.2f",tot);



    return 0;
}