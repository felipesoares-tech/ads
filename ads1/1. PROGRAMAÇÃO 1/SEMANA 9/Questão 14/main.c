#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
////////////////////////QUEST�O 14////////////
int main()
{
    setlocale(LC_ALL, "");

    int cont;
    float chico,juca;


    chico = 1.50; //CHICO CRESCE 2CM POR ANO
    juca = 1.10; //JUCA CRESCE 3CM POR ANO
    cont = 0;

    while(juca<chico)
    {
      juca = juca + 0.03;
      chico = chico + 0.02;
      cont++;
    }

    printf("\nA QUANTIDADE DE ANOS NECESS�RIOS PARA QUE JUCA SEJA MAIOR QUE CHICO �: %d", cont);


    return 0;
}
