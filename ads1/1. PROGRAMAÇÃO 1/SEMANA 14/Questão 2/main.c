#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
////////////////////////////////QUESTÃO-02////////////////////////////////////////////

typedef struct
{
    char nome[50];
    int dia,mes;

} reg;

int main()
{
    setlocale(LC_ALL,"");

    reg x[40];
    int i,j,k=0,l;
    char meses[12][30]= {"JANEIRO","FEVEREIRO","MARÇO","ABRIL","MAIO","JUNHO","JULHO","AGOSTO","SETEMBRO","OUTUBRO","NOVEMBRO","DEZEMBRO"};

    printf("DIGITE 'X' PARA O NOME PARA FINALIZAR A LEITURA!!\n\n");
    for(l=0; ; l++)
    {
        printf("NOME -> ");
        gets(x[l].nome);
        if(strcmp("X",x[l].nome)==0 || strcmp("x",x[l].nome)==0)
            break;


        printf("DATA DE NASCIMENTO (dd/mm) -> ");
        scanf("%d/%d",&x[l].dia,&x[l].mes);
        setbuf(stdin, NULL);
    }


    printf("\nANIVERSARIANTES DE JANEIRO A DEZEMBRO!!\n\n");
    for(i=1; i<=12; i++)
    {

        printf("MES %s\n",meses[i-1]);


        for(j=0; j<l; j++)
        {
            if(x[j].mes == i)
            {
                printf("%s , %d/%d\n",x[j].nome,x[j].dia,x[j].mes);
                k=0;
            }
            else
                k++;

        }
        if(k == 4)
        {
            printf("NÃO HÁ ANIVERSARIANTES NO MÊS EM QUESTÃO!!\n\n");
            k=0;
        }else
        k=0;

    }

    return 0;
}
