#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
////////////////////////////////QUESTÃO-11////////////////////////////////////////////
int main()
{
    setlocale(LC_ALL,"");
    int mat[3][3];
    int i,j,soma,mult;

    soma=0;
    mult=1;

    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            printf("LINHA %d, COLUNA %d -> ",i+1,j+1);
            scanf("%d",&mat[i][j]);
            soma = soma + mat[i][j];
        }
    }
    printf("\nSOMA DOS ELEMENTOS = %d\n", soma);
    printf("\nELEMENTOS PARES:\n\n");

    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            if(mat[i][j]%2 == 0)
                printf("%d\n",mat[i][j]);
        }
    }

    for(i=0; i<=2; i++)
        mult = mult*mat[i][2];

    printf("\nMULTIPLICAÇÃO DOS ELEMENTOS DA COLUNA 3 -> %d\n",mult);

    printf("\nELEMENTOS DA DIAGONAL PRINCIPAL:\n\n");
    for(i=0,j=0; i<=2; i++,j++)
        printf("%d\n",mat[i][j]);




    return 0;
}
