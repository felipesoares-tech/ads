#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
////////////////////////////////QUESTÃO-5////////////////////////////////////////////
int main()
{
    setlocale(LC_ALL,"");

    int n1,n2,x,y,aux1,aux2;

    y=1;

    printf("INFORME OS NÚMEROS --> ");
    scanf("%d,%d", &n1,&n2);

    aux1=n1;
    aux2=n2;

    if(n1>=n2)
    {
        for(x=2; x<=aux1; x++)
        {
            while(n1%x == 0 || n2%x == 0)
            {
                if(n1%x == 0)
                    n1 = n1/x;

                if(n2%x == 0)
                    n2 = n2/x;

                y = y * x;

            }
        }
    }
    else
    {
        if (n2>=n1)
        {
            for(x=2; x<=aux2; x++)
            {

                while(n1%x == 0 || n2%x == 0)
                {
                    if(n1%x == 0)
                        n1 = n1/x;

                    if(n2%x == 0)
                        n2 = n2/x;

                    y = y * x;
                }
            }
        }
    }

    printf("\nO MMC É --> %d",y);

    return 0;
}
