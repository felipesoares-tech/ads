#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
////////////////////////////////QUESTÃO-01////////////////////////////////////////////

struct reg
{
    char nome[50];
    char cargo[30];
    char cpf[12];
    int id,dia,mes,ano,cod;
    char sexo;
    float salario;

};

int main()
{
    setlocale(LC_ALL,"");

    struct reg x;

    printf("NOME -> ");
    gets(x.nome);

    printf("IDADE -> ");
    scanf("%d",&x.id);
    setbuf(stdin, NULL);
    printf("SEXO(M/F) -> ");
    x.sexo = getchar();
    setbuf(stdin, NULL);
    printf("CPF -> ");
    gets(x.cpf);
    printf("DATA DE NASCIMENTO (xx/xx/xxx) -> ");
    scanf("%d/%d/%d",&x.dia,&x.mes,&x.ano);

    printf("CÓDIGO DO SETOR (0-99) -> ");
    scanf("%d",&x.cod);

    printf("SALÁRIO -> R$");
    scanf("%f",&x.salario);

    printf("\nNOME = %s",x.nome);
    printf("\nIDADE = %d",x.id);
    printf("\nSEXO = %c",x.sexo);
    printf("\nCPF = %s",x.cpf);
    printf("\nDATA DE NASCIMENTO = %d/%d/%d",x.dia,x.mes,x.ano);
    printf("\nSETOR = %d",x.cod);
    printf("\nSALÁRIO = R$%.2f\n",x.salario);


    return 0;

}
