#include <stdio.h>
#include <stdlib.h>

///9. Escreva um programa para concatenar duas strings usando somente ponteiros.

int main()
{
    char string1[500]= "FELIPE",*p1=string1;
    char string2[]="SOARES",*p2=string2;

    while(*p1)
        p1++;

    for(; *p2; p1++,p2++)
        *p1=*p2;

    printf("%s",string1);

    return 0;
}
