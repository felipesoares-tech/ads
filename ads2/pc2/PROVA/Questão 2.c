#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void conv_ch_int(int *v_int,char *v_char)
{
    for(; *v_char; v_char++,v_int++)
        *v_int = (int)*v_char-48; //UTILIZADO LOGICA DA TABELA ASCII E CAST PARA A CONVERSÃO
}

int main ()
{
    setlocale(LC_ALL,"");

    char vet_m[12];
    int vet_m_i[11],*pont=vet_m_i,maior;


    printf("INFORME O NÚMERO DA MATRICULA: ");
    fgets(vet_m,12,stdin);

    conv_ch_int(vet_m_i,vet_m); //CHAMADA A FUNÇÃO

    maior=*pont;

    for(int i=0; i<11; i++,pont++) //LOGICA PARA DESCOBRIR QUAL É MAIOR
        if(*pont>maior)
            maior =  *pont;

    printf("O MAIOR DÍGITO É: %d",maior);

    return 0;
}
