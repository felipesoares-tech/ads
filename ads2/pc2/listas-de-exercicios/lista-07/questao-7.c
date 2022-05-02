#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*7. Escreva um programa que l� uma string e retorna
verdadeiro se a string de entrada � uma pal�ndrome.
*/

int pali(char *string)
{
    int tam=strlen(string);
    char aux[100],cont=0;

    for(int i=0; i<tam; i++,string++)
        aux[i]=*string;

        string=string-2;
    
    for(int i=0; i<tam-1; i++,string--)
    {
        if(aux[i] == *string)
            cont=1;
        else
            cont=0;
    }

    if(cont)
        return 1;
    
        return 0;
}

int main()
{
    setlocale(LC_ALL,"Portuguese");

    char str[100];

    printf("\nDIGITE A PALAVRA DESEJADA (max = 100): ");
    fgets(str,100,stdin);

    if(pali(str))
        printf("A PALAVRA INFORMADA � UMA PAL�NDROME!!");
    else
        printf("A PALAVRA INFORMADA N�O � UMA PAL�NDROME!!");
    
    return 0;
}