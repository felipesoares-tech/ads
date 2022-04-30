#include <stdio.h>
#include <stdlib.h>
///////////////////////////QUESTÃO-3////////////////////////////
int main()
{
    int x,y,z,res,cont;

    x = 0;
    y = 0;
    z = 1;
    cont=0;

    printf("\nTABUADA DE %d\n\n",z);

    while(x < 10)
    {

        x++;
        y++;

        res = z*y;
        printf("%d x %d = %d\n",z,y,res);

        if(x == 10 && z!=10)
        {
            z++;
            y=0;
            x=0;
            printf("\nTABUADA DE %d\n\n",z);
        }

    }

    return 0;
}
