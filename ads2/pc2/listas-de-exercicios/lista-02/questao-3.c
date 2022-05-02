#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
///////////////////////////QUESTÃO-3/////////////////
int main()
{

    float soma=0,n,med;

    setlocale(LC_ALL,"");

    printf("INFORME AS NOTAS OBTIDAS!!\n\n");

    for(int i=0; i<4; i++)
    {
        printf("NOTA %d: ",i+1);
        scanf("%f",&n);

        soma = soma + n;
    }

        med = soma/4;

    if(med>=6)
        printf("ALUNO APROVADO!!");
    else
        printf("ALUNO REPORVADO!!");


 return 0;
}
