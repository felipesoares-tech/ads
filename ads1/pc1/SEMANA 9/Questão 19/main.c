#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
////////////////////////QUESTÃO 19////////////
int main()
{
    setlocale(LC_ALL,"");

    int cod,qtd_veic,qtd_acid,maior_i,menor_i,cod_p1,cod_p2,soma,soma2;
    int cont,cont2;
    float med,med2;

    cont = 1;
    cont2 = 0;
    maior_i = 0;
    soma = 0;
    soma2 = 0;


    while(cont<= 5)
    {
        printf("INFORME O CÓDIGO DA CIDADE -> ");
        scanf("%d", &cod);

        printf("INFORME O NÚMERO DE VEÍCULOS DE PASSEIO -> ");
        scanf("%d", &qtd_veic);

        printf("INFORME O NÚMERO DE ACIDENTES DE TRÂNSITO COM VÍTIMAS -> ");
        scanf("%d", &qtd_acid);

        cont++;
        soma = soma + qtd_veic;

        if(qtd_acid > maior_i)
        {
            maior_i = qtd_acid;
            cod_p1 = cod;
        }

        if(qtd_acid < maior_i && qtd_acid < menor_i)
        {
            menor_i = qtd_acid;
            cod_p2 = cod;
        }

        if(qtd_veic < 2000)
        {
            cont2++;
            soma2 = soma2 + qtd_acid;
        }

    }

    med = soma/5.00;
    med2 = (soma2*1.00)/cont2;


    printf("\nO MAIOR ÍNDICE DE ACIDENTES, OCORRE NA CIDADE DE CÓDIGO -> %d",cod_p1);
    printf("\nO MENOR ÍNDICE DE ACIDENTES, OCORRE NA CIDADE DE CÓDIGO -> %d",cod_p2);
    printf("\nA MÉDIA DE VEÍCULOS EM TODAS AS CIDADES -> %.2f",med);
    printf("\nA MÉDIA DE ACIDENTES NAS CIDADES COM MENOS DE 2.000 VEÍCULOS -> %.2f",med2);


    return 0;
}
