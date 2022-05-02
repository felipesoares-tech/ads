#include <stdio.h>
#include <stdlib.h>
////////////////////////QUESTÃO 12////////////
int main()
{
    int x,y;

    x=1;
    y=0;

    while(x<=100)
    {
        printf("%d\n",x);
        y+=x;
        x++;

    }
    printf("SOMA: %d",y);

    return 0;
}
