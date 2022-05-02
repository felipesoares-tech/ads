#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

///8. Fa�a um programa que armazene em um registro de dados (estrutura
///composta) os da dos de um funcion�rio de uma empresa, compostos de: Nome,
///Idade, Sexo (M/F), CPF, Data de Nascimento, C�digo do Setor onde trabalha (0-
///99), cargo que ocupa (string de at� 30 caracteres) e Sal�rio. Os dados devem
///ser digitados pelo usu�rio, armazenados na estrutura e exibidos na tela.

struct nasc
{
    int dd,mm,aa;
};

struct registro
{
    char nome[50],sexo,cpf[12],cargo[30];
    int idade,codigo;
    float salario;
    struct nasc x;

};

int main()
{
    struct registro dados;

    setlocale(LC_ALL,"");

    printf("INFORME O NOME COMPLETO: ");
    fgets(dados.nome,50,stdin);

    printf("INFORME A SUA IDADE: ");
    scanf("%d",&dados.idade);
    setbuf(stdin,NULL);

    printf("INFORME O SEU SEXO (M/F): ");
    dados.sexo = getchar();
    setbuf(stdin,NULL);

    printf("INFORME O SEU CPF: ");
    fgets(dados.cpf,12,stdin);

    printf("INFORME A SUA DATA DE NASCIMENTO (dd/mm/aa): ");
    scanf("%d/%d/%d",&dados.x.dd,&dados.x.mm,&dados.x.aa);

    printf("INFORME O C�DIGO DE SETOR: ");
    scanf("%d",&dados.codigo);
    setbuf(stdin,NULL);

    printf("INFORME O SEU CARGO: ");
    fgets(dados.cargo,30,stdin);

    printf("INFORME O SEU SAL�RIO (R$): ");
    scanf("%f",&dados.salario);

    printf("\nNOME COMPLETO --> %s",dados.nome);
    printf("IDADE --> %d\n",dados.idade);
    printf("SEXO --> %c\n",dados.sexo);
    printf("CPF --> %s\n",dados.cpf);
    printf("DATA DE NASCIMENTO --> %.2d/%.2d/%d\n",dados.x.dd,dados.x.mm,dados.x.aa);
    printf("C�DIGO DE SETOR --> %d\n",dados.codigo);
    printf("CARGO --> %s",dados.cargo);
    printf("SAL�RIO --> %.2f\n",dados.salario);


    return 0;
}
