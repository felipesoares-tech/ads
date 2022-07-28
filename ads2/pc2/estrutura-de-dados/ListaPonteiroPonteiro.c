#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//EXEMPLO DE LISTA DUPLAMENTE ENCADEADA UTILIZANDO PONTEIRO PARA PONTEIRO

typedef struct NO{
    int value;
    size_t len;
    struct NO *next;
    struct NO *prev;
}tNO;

void insert_value(tNO **start, tNO **end, int vl){

    tNO *newNode = (tNO*) malloc(sizeof(tNO));

    if(!newNode){
        printf("Erro ao alocar novo no");
        exit(1);
    }

    newNode->value = vl;
    newNode->next = NULL;
    
    if(!(*start)){
        *start = newNode;
        *end = *start;
        newNode->prev = NULL;
        newNode->len = 1;
        return;
    }

    newNode->prev = *end;
    (*end)->next = newNode;
    *end = newNode;
    newNode->len = newNode->prev->len + 1;
    
}

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "");

    tNO *start=NULL, *end=NULL;

    insert_value(&start,&end,10);
    insert_value(&start,&end,20);
    insert_value(&start,&end,30);
    insert_value(&start,&end,40);
    insert_value(&start,&end,50);
    

    return 0;
}