#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
////////////////////////////////QUESTÃO-05////////////////////////////////////////////
int main()
{
    setlocale(LC_ALL,"");

    float mat[12][4];
    int i,j,k;
    float soma,soma2;
    char mes[13][30]= {"JANEIRO","FEVEREIRO","MARÇO","ABRIL","MAIO","JUNHO","JULHO","AGOSTO","SETEMBRO","OUTUBRO","NOVEMBRO","DEZEMBRO"};

    soma=0;
    soma2=0;
    k=0;

    printf(">>TABELA DE VENDAS<<\n");
    for(i=0; i<=11; i++)
    {
        for(j=0; j<=3; j++)
        {
            printf("%s, SEMANA %d = R$",mes[i],j+1);
            scanf("%f",&mat[i][j]);
            soma2 = soma2 + mat[i][j];
        }
    }

    for(i=0; i<=11; i++)
    {
        for(j=0; j<=3; j++)
            soma = soma + mat[i][j];

        printf("\nTOTAL DE VENDAS MÊS DE %s = R$%.2f",mes[i],soma);
        soma=0;
    }

    printf("\n\nTOTAL VENDIDO EM CADA SEMANA DURANTE O ANO\n\n");

    for(i=0; i<=11; i++)
    {
        for(j=0; j<=3; j++)
        {
            k++;
            printf("SEMANA %d = R$%.2f\n",k,mat[i][j]);

        }
    }

    int cont=0;

    printf("\nSEMANA COM MAIOR QUANTIDADE DE VENDAS DURANTE UM DADO MÊS!!!\n\n");

    for(i=0; i<=11; i++)
    {
        for(k=0; k<=3; k++)
        {
            for(j=0; j<=3; j++)
            {
                if(mat[i][k]>= mat[i][j])
                    cont++;

            }
            if(cont == 4)
            {
                printf("SEMANA %d , MÊS %s\n",k+1,mes[i]);
                cont=0;
            }
            else if(cont < 4)
                cont=0;
        }
    }

    printf("\nTOTAL VENDIDO NO ANO -> R$%.2f",soma2);

    return 0;
}
