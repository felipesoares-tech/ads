#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/////////////////////////QUESTÃO-5/////////////////////////
int glob;
typedef struct
{
    int h,m,s;
    int h2,m2,s2;

} horas;

typedef struct
{
    int id;
    float seg_t;
    float vlr_rec;
    char tarefa[50];
    int hf,mf,sf;
    horas y;

} dados;

void calc(dados *a,int n)
{
    if(a[glob].y.m2>=a[glob].y.m && a[glob].y.s2>=a[glob].y.s)
    {
        a[glob].hf = a[glob].y.h2 - a[glob].y.h;
        a[glob].mf = a[glob].y.m2 - a[glob].y.m;
        a[glob].sf = a[glob].y.s2 - a[glob].y.s;
    }
    else
    {
        a[glob].hf = (a[glob].y.h2 - a[glob].y.h)-1;
        a[glob].mf = 59 - ((a[glob].y.m - a[glob].y.m2));
        a[glob].sf = 60 - ((a[glob].y.s - a[glob].y.s2));
    }

    a[glob].vlr_rec = a[glob].seg_t * (a[glob].sf + (a[glob].mf*60)+(a[glob].hf*3600));
}


int main()
{
    setlocale(LC_ALL,"");

    int i,j;
    dados x[30];

    for(i=0,glob=0; ; i++,glob++)
    {
        printf("NÚMERO DE IDENTIFICAÇÃO -> ");
        scanf("%d",&x[i].id);
        if(x[i].id<0)
            break;

        printf("TAREFA A SER EXECUTADA -> ");
        fflush(stdin);
        gets(x[i].tarefa);

        printf("ÍNICIO (hh:mm:ss)-> ");
        scanf("%d:%d:%d",&x[i].y.h,&x[i].y.m,&x[i].y.s);

        printf("TÉRMINO (hh:mm:ss)-> ");
        scanf("%d:%d:%d",&x[i].y.h2,&x[i].y.m2,&x[i].y.s2);

        printf("VALOR DO SEGUNDO TRABALHADO -> ");
        scanf("%f",&x[i].seg_t);

        calc(x,30);

    }
    printf("\n");
    for(j=0; j<i; j++)
    {
        printf("NÚMERO DE IDENTIFICAÇÃO = %d\n",x[j].id);
        printf("TAREFA EXECUTADA = %s, DURAÇÃO = %d:%d:%d\n",x[j].tarefa,x[j].hf,x[j].mf,x[j].sf);
        printf("VALOR A SER RECEBIDO = R$%.2f\n\n",x[j].vlr_rec);


    }


    return 0;
}
