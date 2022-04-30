#include <stdio.h>
#include <stdlib.h>
#include <string.h>
////////////////////////QUESTÃO 13////////////
int main()
{

    char nome[30],sexo,nome_alt[30],nome_peso[30];
    int idade,cont;
    float peso,altura,soma,media,maior_alt,maior_peso;

    cont=0;
    idade=0;
    maior_alt=0;
    maior_peso=0;

    printf("NOME -> ");
    scanf("%s", nome);

    while(strcmp(nome,"@")==1)
    {
        printf("SEXO -> ");
        scanf("%*c%c", &sexo);

        printf("IDADE -> ");
        scanf("%d", &idade);

        printf("PESO -> ");
        scanf("%f", &peso);

        printf("ALTURA -> ");
        scanf("%f", &altura);

                if(sexo == 'M'|| sexo == 'm')
        {

            if(altura>maior_alt)
            {
                maior_alt = altura;
                strcpy(nome_alt,nome);
            }

        }
        else
        {
            if(peso>maior_peso)
            {
                maior_peso = peso;
                strcpy(nome_peso,nome);

            }

        }

        cont++;
        soma+=idade;

        printf("NOME -> ");
        scanf("%s", nome);
    }
    media = soma/cont;

    printf("\nNOME DO ATLETA MAIS ALTO: %s", nome_alt);
    printf("\nATELA DO SEXO FEMININO MAIS PESADA: %s", nome_peso);
    printf("\nMEDIA DE IDADES: %.0f\n\n", media);


    return 0;
}
