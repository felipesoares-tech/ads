#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

///2. Faça um programa que receba do usuário um arquivo texto e mostre
///na tela quantas letras são vogais e quantas são consoantes.

int main()
{
    setlocale(LC_ALL,"");

    FILE *arqv3;

    arqv3 = fopen("arqv3.txt","r+");

    if(!arqv3)
    {
        printf("ERRO!!");
        exit(1);
    }

    char vl;
    int cons=0,vog=0;

    while(vl!=EOF)
    {
        vl=getc(arqv3);
        if(vl == 'a' ||vl == 'e' ||vl == 'i' ||vl == 'o' ||vl == 'u')
            vog++;
        else
            cons++;
    }
    printf("QUANTIDADE DE VOGAIS = %d\n",vog);
    printf("QUANTIDADE DE CONSOANTES = %d\n",cons);


    fclose(arqv3);

    return 0;
}
