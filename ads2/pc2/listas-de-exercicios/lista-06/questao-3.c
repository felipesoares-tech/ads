#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

///3. Faça um programa que receba do usuário um arquivo texto. Crie
///outro arquivo texto contendo o texto do arquivo de entrada com as
///vogais substituídas por ’*’.

int main()
{
    setlocale(LC_ALL,"");

    FILE *arqv3,*arqv4;

    arqv3 = fopen("arqv3.txt","r+");
    arqv4 = fopen("arqv4.txt","w+");

    if(!arqv3 || !arqv4)
    {
        printf("ERRO!!");
        exit(1);
    }

    char letr;

    do
    {
        letr=getc(arqv3);
        if(!feof(arqv3))
            if(letr == 'a' ||letr == 'e' ||letr == 'i' ||letr == 'o' ||letr == 'u' )
                putc('*', arqv4);
            else
                putc(letr, arqv4);

    }
    while(!feof(arqv3));


    fclose(arqv3);
    fclose(arqv4);

    return 0;
}
