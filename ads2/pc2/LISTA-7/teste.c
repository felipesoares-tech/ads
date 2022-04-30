#include <stdio.h>
#include <stdlib.h>

int potencia(int base, int exp)
{
    if (exp == 0)
        return 1;
    else if (exp == 1)
        return base;
    else
        return base * potencia(base,(exp-1));
}

int main()
{

    int base = 2;
    int expoente = 0;

    printf("%d",potencia(base,expoente));

    return 0;
}
