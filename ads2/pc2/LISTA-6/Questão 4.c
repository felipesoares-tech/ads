#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <Windows.h>
#define TAM 100

typedef struct ///Estrutura de dados
{
    char nome[50],telefone[50]; ///Nome e Telefone a serem ineridos
    int dd,mm; ///dia e mês de aniversário
    int status; ///Status do contato, 1 para ativo, 0 para inativo

} contatos;

void upper(char *entr) ///Função para receber uma string e coloca-la em caixa alta.
{
    for(int j=0; entr[j]!='\0'; j++)
        entr[j]=toupper(entr[j]);
}

void bug(char *string) ///Função criada para remover o \n de uma string que foi lida pelo fgets
{
    int tam=strlen(string);

    string[tam-1] = '\0';
}

void inserir_dados(contatos *entr, int *contador)
{

    system("cls");
    printf(">>INSERINDO CONTATO<<\n\n");
    entr[*contador].status=1; ///ativando cadastro
    printf("INFORME O NOME: ");
    fgets(entr[*contador].nome,50,stdin);

    bug(entr[*contador].nome); ///chamando a função a qual irá retirar o \n da string e colocar um \0

    upper(entr[*contador].nome); ///chamando a função a qual irá transformar tudo que o usuário digitar em caixa alta

    printf("INFORME O TELEFONE: ");
    fgets(entr[*contador].telefone,50,stdin);

    printf("INFORME O NASCIMENTO (dd/mm): ");
    scanf("%d/%d",&entr[*contador].dd,&entr[*contador].mm);

    *contador+=1;

    printf("\nCONTATO INSERIDO COM SUCESSO!!\n");

    printf("\n");
    system("pause");
    system("cls");

}

void remover_contato(contatos *entr, int contador)
{
    char busca[50];
    int teste=0;

    system("cls");
    printf(">>REMOVENDO CONTATOS<<\n\n");
    printf("INFORME O NOME DO CONTATO O QUAL DESEJA REMOVER: ");
    fgets(busca,50,stdin);

    bug(busca);

    upper(busca);

    for(int i=0; i<contador; i++) ///MÉTODO DE NAVEGAÇÃO. enquanto não forem encontrados '\0' na primeira posição da string nome, o ponteiro irá andar.
    {
        ///se em algum momento ele encontrar o '\0' então significa que chegamos ao final da estrutura

        if(strcmp(busca,entr[i].nome)==0 && entr[i].status == 1) ///comparando o nome digitado com os dados contidos na estrutura, se retornar 0 significa que são iguais
        {
            entr[i].status=0; ///inativando cadastro
            printf("\nCONTATO (%s) REMOVIDO COM SUCESSO!\n",entr[i].nome);
            teste=1; ///atribuição somente para saber se foi possível remover o contato
        }
    }
    if(teste == 0)
        printf("\nFALHA AO REMOVER O CONTATO INDICADO!\n");

    printf("\n");
    system("pause");
    system("cls");

}

void buscar_contato(contatos *entr, int contador)
{
    char busca[50];
    int teste=0;

    system("cls");
    printf("INFORME O NOME DO CONTATO O QUAL DESEJA BUSCAR: ");
    fgets(busca,50,stdin);

    bug(busca);

    upper(busca);
    printf("----------------------------------------------------");
    for(int i=0; i<contador; i++)
    {
        if(strcmp(busca,entr[i].nome)==0 && entr[i].status == 1)
        {
            printf("\nNOME -> %s\n",entr[i].nome);
            printf("TELEFONE -> %s",entr[i].telefone);
            printf("DATA DE NASCIMENTO -> %.2d/%.2d\n",entr[i].dd,entr[i].mm);
            printf("----------------------------------------------------");
            teste=1;
        }
    }

    if(teste == 0)
        printf("\nFALHA AO BUSCAR O CONTATO INDICADO!!!\n");

    printf("\n");
    system("pause");
    system("cls");
}

void listar_contato(contatos *entr, int contador)
{

    int teste=0;

    system("cls");
    printf(">>LISTA DE CONTATOS<<\n\n");
    printf("----------------------------------------------------");
    for(int i=0; i<contador; i++)
    {
        if(entr[i].status == 1)
        {
            printf("\nNOME -> %s\n",entr[i].nome);
            printf("TELEFONE -> %s",entr[i].telefone);
            printf("DATA DE NASCIMENTO -> %.2d/%.2d\n",entr[i].dd,entr[i].mm);
            printf("----------------------------------------------------");
            teste=1;
        }
    }
    if(teste == 0)
        printf("\nNÃO HÁ CONTATOS A SEREM EXIBIDOS!!\n");


    printf("\n");
    system("pause");
    system("cls");

}

void listar_letra(contatos *entr, int contador)
{

    char busca[50];
    int teste=0;

    system("cls");
    printf(">>BUSCANDO POR LETRA<<\n\n");
    printf("INFORME A PRIMEIRA LETRA DO NOME: ");
    fgets(busca,50,stdin);

    upper(busca);

    printf("----------------------------------------------------");
    for(int i=0; i<contador; i++)
    {
        if(busca[0] == entr[i].nome[0] && entr[i].status == 1)
        {
            printf("\nNOME -> %s\n",entr[i].nome);
            printf("TELEFONE -> %s",entr[i].telefone);
            printf("DATA DE NASCIMENTO -> %.2d/%.2d\n",entr[i].dd,entr[i].mm);
            printf("----------------------------------------------------");
            teste=1;
        }
    }
    if(teste == 0)
        printf("\nFALHA AO BUSCAR O CONTATO INDICADO!\n");

    printf("\n");
    system("pause");
    system("cls");

}

void listar_niver(contatos *entr, int contador)
{
    int teste=0;

    time_t mytime; ///Criando variável para armazenar a data do relógio.
    mytime = time(NULL); ///Atribuindo a data atual para a varíavel mytime
    struct tm tm = *localtime(&mytime); ///Local time recebe o tempo atual em segundos

    system("cls");
            printf(">>BUSCANDO PELOS ANIVERSARIANTES DO MÊS<<\n\n");
            printf("----------------------------------------------------");
            for(int i=0; i<contador; i++)
            {
                if(entr[i].mm == tm.tm_mon+1 && entr[i].status == 1)
                {
                    printf("\nNOME -> %s\n",entr[i].nome);
                    printf("TELEFONE -> %s",entr[i].telefone);
                    printf("DATA DE NASCIMENTO -> %.2d/%.2d\n",entr[i].dd,entr[i].mm);
                    printf("----------------------------------------------------");
                    teste=1;
                }
            }
            if(teste == 0)
                printf("\nNÃO HÁ NENHUM ANIVERSARIANTE NO MÊS!\n");

            printf("\n");
            system("pause");
            system("cls");

}



int main()
{
    setlocale(LC_ALL,"");

    contatos dados[TAM];

    ///dados[TAM] -----> criando um vetor de estruturas de tamanho "TAM" (Visto que poderão ser armazenados vários dados)

    FILE *agenda; ///criando os arquivos, onde agenda será onde será salvo os contatos, e "tmp" será utilizado para salvar a ultima posição do ponteiro

    int op=0;
    int cont=0;

    agenda = fopen("agenda.bin","r+b"); ///abrindo a agenda para letiura e escrita

    if((cont=fread(dados,sizeof(contatos),TAM, agenda))<1)
        if(feof(agenda))
            printf("ERRO NA LEITURA");


    fclose(agenda); ///fechando arquivos

    agenda = fopen("agenda.bin","w+b"); ///criando um novo arquivo de agenda

    if(!agenda) ///caso não seja possível criar os arquivos irá retornar uma mensagem de erro
    {
        printf("NÃO FOI POSSÍVEL CRIAR OS ARQUIVOS!!");
        exit(1);
    }
    do
    {
        printf("\n[1] -> INSERIR CONTATOS\n");
        printf("[2] -> REMOVER CONTATOS\n");
        printf("[3] -> PESQUISAR CONTATOS PELO NOME\n");
        printf("[4] -> LISTAR TODOS OS CONTATOS\n");
        printf("[5] -> LISTAR TODOS OS CONTATOS CUJO NOME INICIA COM UMA DADA LETRA\n");
        printf("[6] -> IMPRIMIR OS ANIVERSARIANTES DO MÊS\n");
        printf("[0] -> SAIR\n\n");


        printf("INFORME A OPÇÃO DESEJADA: ");
        scanf("%d",&op);
        setbuf(stdin,NULL);

        switch(op)
        {
        case 1:
            inserir_dados(dados,&cont); ///INSERÇÃO DE DADOS NA ESTRUTURA
            break;
        case 2:
            remover_contato(dados,cont); ///REMOÇÃO DE CONTATOS NA ESTRUTURA
            break;
        case 3:
            buscar_contato(dados,cont); ///BUSCANDO CONTATO PELO NOME
            break;
        case 4:
            listar_contato(dados,cont); ///LISTANDO TODOS OS CONTATOS
            break;
        case 5:
            listar_letra(dados,cont); ///LISTANDO A PARTIR DA PRIMEIRA LETRA
            break;
        case 6:
            listar_niver(dados,cont); ///LISTANDO ANIVERSARIANTES
            break;
        case 0:
            printf("PROGRAMA FINALIZADO, TODAS AS ALTERAÇÕES FORAM SALVAS!!");
            break;
        default:
            system("cls");
            printf("OPÇÃO INVÁLIDA!!\n");
            system("pause");
        }
    }
    while(op);

    agenda = fopen("agenda.bin","r+b"); ///abrindo a agenda para letiura e escrita

    for(int i=0; i<cont; i++)
    {
        if(dados[i].status == 1)
            if(fwrite(&dados[i], sizeof(contatos),1, agenda)!=1)
                printf("ERRO AO GRAVAR DADOS!!");
    }

    fclose(agenda);

    return 0;
}