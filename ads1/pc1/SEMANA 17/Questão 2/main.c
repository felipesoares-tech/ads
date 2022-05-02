#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/////////////////////////QUESTÃO-2/////////////////////////
void func (int a[5])
{
    int i,j,x=0;

    for(i=0; i<=4; i++){
        for(j=0; j<=4; j++){
            if(a[i]>= a[j])
                x++;
        }
        if(x < 5)
            x=0;
        else{
            printf("\nO MAIOR NÚMERO É %d",a[i]);
            break;
        }
    }
    x=0;

    for(i=0; i<=4; i++){
        for(j=0; j<=4; j++){
            if(a[i]<= a[j])
                x++;
        }
        if(x < 5)
            x=0;
        else{
            printf("\nO MENOR NÚMERO É %d\n",a[i]);
            break;
        }
    }
}

int main()
{
    setlocale(LC_ALL,"");

    int vet[5];
    int i;

    for(i=0; i<=4; i++)
    {
        printf("VALOR [%d] -> ",i+1);
        scanf("%d",&vet[i]);
    }

    func(vet);

    return 0;
}
