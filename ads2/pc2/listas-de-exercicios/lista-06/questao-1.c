#include <stdio.h>
#include <stdlib.h>

///1. Escreva um programa que:
///(a) Crie/abra um arquivo texto de nome "arq.txt".
///(b) Permita que o usuário grave diversos caracteres nesse arquivo,
///até que o usuário entre com o caractere ’0’.
///(c) Feche o arquivo.

///Agora, abra e leia o arquivo, caractere por caractere, e escreva na tela
///todos os caracteres armazenados.

int main()
{
    float vlr=1;
    FILE *arqv1;

    arqv1 = fopen("arqv1.txt","w+");

    if(!arqv1)
    {
        printf("Erro");
        exit(1);
    }



    while(vlr!=0)
    {

        printf("DIGITE UM NÚMERO: ");
        scanf("%f",&vlr);
        if(vlr!=0)
            fprintf(arqv1,"%.2f\n",vlr);

    }

    fclose(arqv1);

    arqv1 = fopen("arqv1.txt","r");

    float a;
    printf("\n");
    do
    {
        fscanf(arqv1,"%f",&a);
        if(!feof(arqv1))
        printf("%.2f\n",a);
    }
    while(!feof(arqv1));

    fclose(arqv1);


    return 0;
}
