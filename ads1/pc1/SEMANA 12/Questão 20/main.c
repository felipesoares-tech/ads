#include <stdio.h>
#include <stdlib.h>
////////////////////////////////QUESTÃO-20////////////////////////////////////////////
int main()
{
    float mat[3][8][4];
    int i,j,k;
    float soma,soma2,med;

    soma=0;
    soma2=0;

    printf("INFORME AS NOTAS OBTIDAS !! \n\n");
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=7; j++)
        {
            for(k=0; k<=3; k++)
            {
                printf("TURMA %d :: ALUNO %d :: DISCIPLINA %d >> ",i+1,j+1,k+1);
                scanf("%f",&mat[i][j][k]);
                soma = soma + mat[i][j][k];
                soma2 = soma2 + mat[i][j][k];

                if(i == 0 && j == 7 && k == 3)
                {
                    med = soma2/8;
                    printf("\nMEDIA DA TURMA = %.2f",med);
                    soma2=0;
                }

                if(i == 1 && j == 7 && k == 3)
                {
                    med = soma2/8;
                    printf("\nMEDIA DA TURMA = %.2f",med);
                    soma2=0;
                }

                if(i == 2 && j == 7 && k == 3)
                {
                    med = soma2/8;
                    printf("\nMEDIA DA TURMA = %.2f",med);
                    soma2=0;
                }
            }
        }
    }

    med = soma/96;
    printf("\n\nMEDIA DA ESCOLA = %.2f",med);



    return 0;
}
