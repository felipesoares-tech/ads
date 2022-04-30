#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
////////////////////////////////QUESTÃO-10////////////////////////////////////////////
int main()
{
    setlocale(LC_ALL,"");

    int temp[121],soma;
    float media;
    int i,j,x,y,z;

    soma = 0;
    x = 0;
    y = 0;
    z = 0;

    for(i=0; i<=120; i++)
    {
        printf("TEMPERATURA %d° DIA -> ",i+1);
        scanf("%d",&temp[i]);
        soma = soma + temp[i];
    }
    media = soma/121.00;

    for(i=0; i<=120; i++)
    {
        for(j=0; j<=120; j++)
        {

            if(temp[i]>= temp[j])
                x++;
            if(temp[i]<= temp[j])
                y++;

            if(x == 121)
            {
                x=0;
                printf("\nA MAIOR TEMPERATURA É %d°\n",temp[i]);
            }
            else if(x < 121 && j == 120)
                x=0;

            if(y == 121)
            {
                y=0;
                printf("A MENOR TEMPERATURA É %d°",temp[i]);
            }
            else if(y < 121 && j == 120)
                y=0;
        }
    }

    for(i=0; i<=120; i++)
    {
        if(temp[i]< media)
            z++;
    }

    printf("\nTEMPERATURA MÉDIA -> %.2f°",media);
    printf("\nQUANTIDADE DE DIAS QUE A TEMPERATURA FOI INFERIOR A MÉDIA -> %d",z);

    return 0;

}
