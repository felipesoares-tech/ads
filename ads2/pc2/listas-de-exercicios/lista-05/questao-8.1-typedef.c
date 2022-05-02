#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

///8. Fa�a um programa que armazene em um registro de dados (estrutura
///composta) os da dos de um funcion�rio de uma empresa, compostos de: Nome,
///Idade, Sexo (M/F), CPF, Data de Nascimento, C�digo do Setor onde trabalha (0-
///99), cargo que ocupa (string de at� 30 caracteres) e Sal�rio. Os dados devem
///ser digitados pelo usu�rio, armazenados na estrutura e exibidos na tela.

typedef struct
{
    int dd,mm,aa;
}data;

typedef struct
{
    char nome[50],sexo,cpf[12],cargo[30];
    int idade,codigo;
    float salario;
    data slct;

}dados;

int main()
{
    dados x;

    setlocale(LC_ALL,"");

    printf("INFORME O NOME COMPLETO: ");
    fgets(x.nome,50,stdin);

    printf("INFORME A SUA IDADE: ");
    scanf("%d",&x.idade);
    setbuf(stdin,NULL);

    printf("INFORME O SEU SEXO (M/F): ");
    x.sexo = getchar();
    setbuf(stdin,NULL);

    printf("INFORME O SEU CPF: ");
    fgets(x.cpf,12,stdin);

    printf("INFORME A SUA DATA DE NASCIMENTO (dd/mm/aa): ");
    scanf("%d/%d/%d",&x.slct.dd,&x.slct.mm,&x.slct.aa);

    printf("INFORME O C�DIGO DE SETOR: ");
    scanf("%d",&x.codigo);
    setbuf(stdin,NULL);

    printf("INFORME O SEU CARGO: ");
    fgets(x.cargo,30,stdin);

    printf("INFORME O SEU SAL�RIO (R$): ");
    scanf("%f",&x.salario);

    printf("\nNOME COMPLETO --> %s",x.nome);
    printf("IDADE --> %d\n",x.idade);
    printf("SEXO --> %c\n",x.sexo);
    printf("CPF --> %s\n",x.cpf);
    printf("DATA DE NASCIMENTO --> %.2d/%.2d/%d\n",x.slct.dd,x.slct.mm,x.slct.aa);
    printf("C�DIGO DE SETOR --> %d\n",x.codigo);
    printf("CARGO --> %s",x.cargo);
    printf("SAL�RIO --> %.2f\n",x.salario);


    return 0;
}
