#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

///7. Escreva um programa que leia 10 inteiros da entrada padr�o, armazene-os em
///um vetor e os escreva na sa�da padr�o na ordem contr�ria; todos os acessos ao
///vetor devem ser feitos usando somente ponteiros, sem usar �ndices (vet[i], etc).

int main()
{
     setlocale(LC_ALL, "");
     int vet[10],i;
      int *p=vet;

     for(i=0;i<10;i++,p++)
     {
         printf("Informe o %d n�mero: ",i+1);
         scanf("%d",p);
     }

     p--;

     for(i=9;i>-1;p--,i--)
         printf("\nO %d n�mero � %d",i,*p);

    return 0;
}
