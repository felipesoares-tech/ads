#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
////////////////////////////////QUEST�O-08////////////////////////////////////////////
int main()
{
    setlocale(LC_ALL,"");

    int term,i,y;
    double fibo[100]= {1,1};

    printf("INFORME A QUANTIDADE DE TERMOS (NO M�XIMO 100) -> ");
    scanf("%d",&term);

    printf("\n");
    for(i=2,y=0; y<term; i++,y++)
    {
        fibo[i] = fibo[i-1] + fibo[i-2];
        printf("%.0lf\n",fibo[y]);
    }


    return 0;

}
