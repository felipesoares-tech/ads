#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
/////////////////////////////////QUESTÃO-1/////////////////////////////////
int anos(int dia_nasc, int mes_nasc, int ano_nasc, int ano_atual, int mes_atual, int dia_atual)
{
    int x;

    if(mes_nasc<mes_atual)
        x=ano_atual-ano_nasc;
    else
    {
        if(mes_nasc == mes_atual)
        {
            if(dia_nasc<dia_atual)
                x=ano_atual-ano_nasc;
            else
            {
                if(dia_nasc>dia_atual)
                    x=(ano_atual-ano_nasc)-1;

                if(dia_nasc == dia_atual)
                    x=ano_atual-ano_nasc;
            }
        }
        else
            x=(ano_atual-ano_nasc)-1;
    }
    return x;
}

int meses(int mes_nasc, int mes_atual)
{
    int x=0,i;

    if(mes_nasc<=mes_atual)
    {
        if(mes_nasc<mes_atual)
        {
            for(i=mes_nasc+1; i<mes_atual; i++)
                x++;
        }


        if(mes_nasc == mes_atual)
        {
            for(i=1; i<=mes_atual; i++)
                x++;
        }


    }
    else
    {
        for(i=1; i<mes_atual; i++)
            x++;
    }

    return x;
}

int dias(int qtd_d_m,int dia_nasc, int dia_atual, int mes_nasc, int mes_atual)
{
    int x;

    if(mes_nasc>mes_atual || mes_nasc<mes_atual )
    {
        x = (qtd_d_m - dia_nasc) + (dia_atual-1);
    }
    else
    {
        if(mes_nasc == mes_atual)
            x = (qtd_d_m - dia_nasc) + (dia_atual+1);
    }


    return x;
}

int main()
{
    setlocale(LC_ALL,"");

    int d_n,m_n,a_n;
    int d_a,m_a,a_a;
    int jan=31,fev=28,mar=31,abr=30,mai=31,jun=30,jul=31,ago=31,set=30,out=31,nov=30,dez=31;
    int y;

    printf("INFORME A DATA ATUAL (xx/xx/xxxx) -> ");
    scanf("%d/%d/%d",&d_a,&m_a,&a_a);

    printf("INFORME A DATA DE NASCIMENTO (xx/xx/xxxx) ->");
    scanf("%d/%d/%d",&d_n,&m_n,&a_n);

    switch(m_n)
    {
    case 1:
        y = jan;
        break;
    case 2:
        y = fev;
        break;
    case 3:
        y = mar;
        break;
    case 4:
        y = abr;
        break;
    case 5:
        y = mai;
        break;
    case 6:
        y = jun;
        break;
    case 7:
        y = jul;
        break;
    case 8:
        y = ago;
        break;
    case 9:
        y = set;
        break;
    case 10:
        y = out;
        break;
    case 11:
        y = nov;
        break;
    case 12:
        y = dez;
        break;
    }

    printf("\nVOCÊ TEM %d ANOS %d MESES e %d DIAS!",anos(d_n,m_n,a_n,a_a,m_a,d_a),meses(m_n,m_a),dias(y,d_n,d_a,m_n,m_a));


    return 0;
}
