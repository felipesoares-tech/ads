#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int posicao(FILE *arquivo)
{

    char byte;
    int cont=0;

    while (!feof(arquivo))
    {
        cont+=fscanf(arquivo, "%c", &byte);
        if (byte == '#')
        {
            rewind(arquivo);
            return cont-1;
        }
    }
    return 0;
}

char *comentario(FILE *arquivo)
{
    char byte,busca;
    int tam=0,aux=0;

    while (!feof(arquivo))
    {
        aux+=fscanf(arquivo, "%c", &byte);
        if (byte == '#')
        {
            
            do{
                tam+=fscanf(arquivo,"%c",&busca);
            }while(busca!= '\n');
            fseek(arquivo,-(tam+2),SEEK_CUR);

            char *frase = (char*) malloc(sizeof(char)*(tam+1));
            memset(frase,'\0',(tam+1));

            fread(frase,sizeof(char),tam,arquivo);
            rewind(arquivo);

            return frase;
        }
    }
    return 0;
}

void strcpypon(char string, char *pont)
{
    int cont=0;

    for(i=0; *pont; i++,pont++)
    {
        string[i] = *pont;
    }
    string[i]='\0';
}

int main()
{


    FILE *arqv, *arqv2;
    char dados[500];
    int col, lin, max;

    arqv = fopen("feep.pgm", "r");

    arqv2 = fopen("feep_2.pgm", "w+");

    if (!arqv)
    {
        printf("ERRO NA LEITURA!!");
        exit(1);
    }
    if (!arqv2)
    {
        printf("ERRO AO CRIAR O ARQUIVO!!");
        exit(1);
    }

    
    if(comentario(arqv)){
        int byte=posicao(arqv);
        char txt[500];
        char *pont=comentario(arqv);

        strcpypon(txt,pont);

        printf("%s",txt);

        system("pause");

        fscanf(arqv,"%s",dados);

        if(dados[0]!='#')
            fprintf(arqv2,"%s\n",dados);
        
        fprintf(arqv2,"%s\n",comentario(arqv));

        fscanf(arqv,"%d %d",&col,&lin);
        fprintf(arqv2,"%d %d",col,lin);

        
    }

    fclose(arqv);
    fclose(arqv2);


    return 0;
}