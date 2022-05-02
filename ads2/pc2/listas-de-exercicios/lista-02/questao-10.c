#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
///////////////////////////QUESTÃO-10/////////////////
int main()
{
    int i,j;

    setlocale(LC_ALL,"");

    printf("TABUADA DE 1 A 10\n");

    for(i=1; i<11; i++)
    {
        for(j=0; j<11; j++)
        {
            printf("\n%d*%d = %d",i,j,i*j);
        }
        printf("\n");
    }

 return 0;
}
