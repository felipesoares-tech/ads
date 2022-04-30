#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    int n;

    printf("ESCOLHA UM NUMERO DE 0 A 9: ");
    scanf("%d",&n);

    printf("\nSEU CELULAR SERÁ FORMATADO EM:\n\n");

    switch(n){
    case 9:
        printf("NOVE\n");
        Sleep(1000);
    case 8:
        printf("OITO\n");
        Sleep(1000);
    case 7:
        printf("SETE\n");
        Sleep(1000);
    case 6:
        printf("SEIS\n");
        Sleep(1000);
    case 5:
        printf("CINCO\n");
        Sleep(1000);
    case 4:
        printf("QUATRO\n");
        Sleep(1000);
    case 3:
        printf("TRES\n");
        Sleep(1000);
    case 2:
        printf("DOIS\n");
        Sleep(1000);
    case 1:
        printf("UM\n");
        Sleep(1000);
    case 0:
        printf("ZERO\n");
        Sleep(1000);
        printf("\a");

    }

    return 0;
}
