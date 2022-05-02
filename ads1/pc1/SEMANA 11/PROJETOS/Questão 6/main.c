#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
////////////////////////////////QUESTÃO-6////////////////////////////////////////////
int main()
{
    setlocale(LC_ALL,"");

    char nome[30],opiniao[30];
    int cont,idade,acm_idade,cont_reg,cont_bom,cont_exc;
    float med,perc;

    cont=1;
    cont_reg=0;
    cont_bom=0;
    cont_exc=0;
    acm_idade=0;

    while(cont<=20)
    {

        printf("SEU NOME --> ");
        scanf("%s",nome);

        printf("IDADE --> ");
        scanf("%d",&idade);

        printf("OPINIÃO --> ");
        scanf("%s",opiniao);

        if(strcmp(opiniao,"excelente")==0)
        {
            acm_idade = acm_idade + idade;
            cont_exc++;
        }

        if(strcmp(opiniao,"regular")==0)
            cont_reg++;

        if(strcmp(opiniao,"bom")==0)
            cont_bom++;

        cont++;
    }

    med = (acm_idade*1.00)/cont_exc;
    perc = (cont_bom*1.00/20)*100;

    printf("\nMÉDIA DAS IDADES DAS PESSOAS QUE RESPONDERAM EXCELENTE --> %.2f",med);
    printf("\nQUANTIDADE DE PESSOAS QUE RESPONDERAM REGULAR --> %d",cont_reg);
    printf("\nPERCENTUAL DE PESSOAS QUE RESPONDERAM BOM ENTRE TODOS ANALISADOS --> %.2f",perc);


    return 0;
}
