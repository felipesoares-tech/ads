#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
///////////////////////////QUEST�O-9/////////////////
int main()
{

    setlocale(LC_ALL,"");

    //f�rmula: C = 5/9 * (F� 32).

    int i;

    for(i=40; i<81; i++)
        printf("%dF = %.2fC\n",i,5.00/9*(i-32));

 return 0;
}
