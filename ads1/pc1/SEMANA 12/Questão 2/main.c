#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
////////////////////////////////QUEST�O-02////////////////////////////////////////////
int main()
{
    setlocale(LC_ALL,"");

    float altura[10],media,soma;
    int i;

    for(i=0,soma=0; i<=9; i++)
    {
        printf("ALTURA DO ATLETA %d -> ",i+1);
        scanf("%f",&altura[i]);
        soma = soma + altura[i];
    }

        media = soma/10;
        printf("\nA M�DIA � -> %.2f\n\n",media);

    for(i=0; i<=9; i++)
    {
        if(altura[i] >= media)
            printf("O ATLETA %d TEM ALTURA ACIMA DA M�DIA !!\n",i+1);

    }




    return 0;
}
