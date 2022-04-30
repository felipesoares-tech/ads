#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

///7. Escreva um programa que leia 10 inteiros da entrada padrão, armazene-os em
///um vetor e os escreva na saída padrão na ordem contrária; todos os acessos ao
///vetor devem ser feitos usando somente ponteiros, sem usar índices (vet[i], etc).

int main()
{
     setlocale(LC_ALL, "");
     int vet[10],i;
      int *p=vet;

     for(i=0;i<10;i++,p++)
     {
         printf("Informe o %d número: ",i+1);
         scanf("%d",p);
     }

     p--;

     for(i=9;i>-1;p--,i--)
         printf("\nO %d número é %d",i,*p);

    return 0;
}
