#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
///////////////////////////QUEST�O-5/////////////////
int main()
{

    int l1,l2,l3;

    setlocale(LC_ALL,"");

    printf("INFORME O PRIMEIRO LADO: ");
    scanf("%d",&l1);

    printf("INFORME O SEGUNDO LADO: ");
    scanf("%d",&l2);

    printf("INFORME O TERCEIRO LADO: ");
    scanf("%d",&l3);

    if(l1 < (l2+l3) && l2 < (l1+l3) && l3 < (l1+l2))
    {
        if(l1 == l2 && l3 == l1)
            printf("TRI�NGULO EQUIL�TERO!!");

        if((l1 == l2 && l3!= l1) || (l1 == l3 && l2!= l1) || (l3 == l2 && l1!=l3))
            printf("TRI�NGULO ISOCELES!!");

        if(l1!= l2 && l2!= l3 && l3 !=l1)
            printf("TRI�NGULO ESCALENO!!");



    }else
    printf("ESTA FORMA GEOM�TRICA N�O � UM TRI�NGULO!!");





 return 0;
}
