#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_PLANE 5
#define MAX_PEOPLE 180
//SIMULADOR DE UM SISTEMA DE VOO
typedef struct {
    unsigned short int dd, mm, aa;
    unsigned short int HH, MM;
} date;

typedef struct NO {
    char name[50], cpf[50];
    unsigned short int chair;
} people;

typedef struct {
    unsigned short int nVoo, places[MAX_PEOPLE];
    char origin[50], destiny[50];
    size_t cont;
    float value;
    people reg[MAX_PEOPLE];
    date acess;
} airplane;

unsigned short int* queryFligth(airplane av[]) {
    unsigned short int nVoo;
    unsigned short int* pVoo = malloc(sizeof(unsigned short int));
    system("clear || cls");
    printf("Informe o Numero de Voo: ");
    scanf("%hd", &nVoo);
    for (size_t i = 0; i < MAX_PLANE; i++) {
        if (nVoo == av[i].nVoo) {
            *pVoo = i;
            return pVoo;
        }
    }
    return NULL;
}

unsigned short int* queryOrigin(airplane av[]) {
    char origin[50];
    unsigned short int* pVoo = malloc(sizeof(unsigned short int));
    system("clear || cls");
    printf("Informe a Origem do Voo: ");
    setbuf(stdin, NULL);
    fgets(origin, 50, stdin);

    for (size_t i = 0; i < MAX_PLANE; i++) {
        if (!strcmp(origin, av[i].origin)) {
            *pVoo = i;
            return pVoo;
        }
    }
    return NULL;
}

unsigned short int* queryDestiny(airplane av[]) {
    char destiny[50];
    unsigned short int* pVoo = malloc(sizeof(unsigned short int));
    system("clear || cls");
    printf("Informe o Destino do Voo: ");
    setbuf(stdin, NULL);
    fgets(destiny, 50, stdin);

    for (size_t i = 0; i < MAX_PLANE; i++) {
        if (!strcmp(destiny, av[i].destiny)) {
            *pVoo = i;
            return pVoo;
        }
    }
    return NULL;
}

void checkDiscounts(int curDay, int curMonth, int curYear, unsigned short int nPlane, airplane av[]) {
    float discount = 0.05 * av[nPlane].value;
    if (curMonth <= av[nPlane].acess.mm)
        if (curMonth < av[nPlane].acess.mm)
            printf("Valor da Passagem(descontos) = R$%.2f", av[nPlane].value - discount);
        else if (curDay <= av[nPlane].acess.dd)
            printf("Valor da Passagem(descontos) = R$%.2f", av[nPlane].value - discount);
        else
            printf("Valor da Passagem = R$%.2f", av[nPlane].value);
    getchar();
}

void proofTicket(airplane av[], unsigned short int nPlane, unsigned short int nChair) {
    time_t mytime;
    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);

    system("clear || cls");
    puts(">>Comprovante de Passagem<<\n");
    printf("Nome: %s", av[nPlane].reg[nChair].name);
    printf("Cpf: %s", av[nPlane].reg[nChair].cpf);
    printf("Origem: %s", av[nPlane].origin);
    printf("Destino: %s", av[nPlane].destiny);
    printf("Data/Horario Passagem: %.2hd/%.2hd/%.2hd as %.2hd:%.2hd\n", av[nPlane].acess.dd, av[nPlane].acess.mm, av[nPlane].acess.aa, av[nPlane].acess.HH, av[nPlane].acess.MM);
    printf("Poltrona: %hd\n", nChair + 1);
    printf("Data de Compra: %.2d/%.2d/%.2d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
    checkDiscounts(tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900, nPlane, av);
}

int main(int argc, char* argv[]) {
    setlocale(LC_ALL, "");

    airplane av[MAX_PLANE];
    unsigned short int choice, subChoice, *retPlane;

    FILE* arqv = fopen("data.txt", "r+");

    if (!arqv) {
        perror("Error");
        exit(1);
    }

    for (size_t i = 0; i < MAX_PLANE; i++) {
        fscanf(arqv, "%hd\n", &av[i].nVoo);
        fgets(av[i].origin, 50, arqv);
        fgets(av[i].destiny, 50, arqv);
        fscanf(arqv, "%hd/%hd/%hd", &av[i].acess.dd, &av[i].acess.mm, &av[i].acess.aa);
        fscanf(arqv, "%hd:%hd", &av[i].acess.HH, &av[i].acess.MM);
        fscanf(arqv, "%f\n", &av[i].value);
        memset(av[i].places, 0, sizeof(av[i].places));
        av[i].cont = MAX_PEOPLE;
    }

    do {
        system("clear || cls");
        puts(">>Sistema de Voo<<\n");
        puts("1 - Consultar");
        puts("2 - Efetuar Reserva");
        puts("3 - Sair");
        printf(":");
        scanf("%hd", &choice);

        switch (choice) {
            case 1:
                system("clear || cls");
                puts(">>Consulta<<\n");
                puts("1 - Numero de voo");
                puts("2 - Origem");
                puts("3 - Destino");
                printf(":");
                scanf("%hd", &subChoice);

                if (subChoice == 1) {
                    retPlane = queryFligth(av);
                    if (retPlane) {
                        system("clear || cls");
                        printf("Aviao [%d]\n\nLugares Disponiveis: %hd\n", *retPlane + 1, av[*retPlane].cont);
                        printf("Numero de Voo: %hd\n", av[*retPlane].nVoo);
                        printf("Origem: %s", av[*retPlane].origin);
                        printf("Destino: %s", av[*retPlane].destiny);
                        printf("Data: %.2hd/%.2hd/%hd\n", av[*retPlane].acess.dd, av[*retPlane].acess.mm, av[*retPlane].acess.aa);
                        printf("Horario: %.2d:%.2d\n", av[*retPlane].acess.HH, av[*retPlane].acess.MM);
                        printf("Valor: R$%.2f\n\n", av[*retPlane].value);
                        printf("Pressione enter para continuar!!\n");
                        setbuf(stdin, NULL);
                        getchar();
                        break;
                    }
                } else {
                    if (subChoice == 2) {
                        retPlane = queryOrigin(av);
                        if (retPlane) {
                            system("clear || cls");
                            printf("Aviao [%d]\n\nLugares Disponiveis: %hd\n", *retPlane + 1, av[*retPlane].cont);
                            printf("Numero de Voo: %hd\n", av[*retPlane].nVoo);
                            printf("Origem: %s", av[*retPlane].origin);
                            printf("Destino: %s", av[*retPlane].destiny);
                            printf("Data: %.2hd/%.2hd/%hd\n", av[*retPlane].acess.dd, av[*retPlane].acess.mm, av[*retPlane].acess.aa);
                            printf("Horario: %.2d:%.2d\n", av[*retPlane].acess.HH, av[*retPlane].acess.MM);
                            printf("Valor: R$%.2f\n\n", av[*retPlane].value);
                            printf("Pressione enter para continuar!!\n");
                            setbuf(stdin, NULL);
                            getchar();
                            break;
                        }
                    } else {
                        if (subChoice == 3) {
                            retPlane = queryDestiny(av);
                            if (retPlane) {
                                system("clear || cls");
                                printf("Aviao [%d]\n\nLugares Disponiveis: %hd\n", *retPlane + 1, av[*retPlane].cont);
                                printf("Numero de Voo: %hd\n", av[*retPlane].nVoo);
                                printf("Origem: %s", av[*retPlane].origin);
                                printf("Destino: %s", av[*retPlane].destiny);
                                printf("Data: %.2hd/%.2hd/%hd\n", av[*retPlane].acess.dd, av[*retPlane].acess.mm, av[*retPlane].acess.aa);
                                printf("Horario: %.2d:%.2d\n", av[*retPlane].acess.HH, av[*retPlane].acess.MM);
                                printf("Valor: R$%.2f\n\n", av[*retPlane].value);
                                printf("Pressione enter para continuar!!\n");
                                setbuf(stdin, NULL);
                                getchar();
                                break;
                            }
                        }
                    }
                }

                system("clear || cls");
                printf("Voo nao encontrado !!\nPressione enter para continuar!!");
                setbuf(stdin, NULL);
                getchar();
                break;
            case 2:
                system("clear || cls");
                retPlane = queryFligth(av);

                if (retPlane == NULL) {
                    printf("Voo inexistente!!\n");
                    printf("Pressione enter para continuar!!\n");
                    setbuf(stdin, NULL);
                    getchar();
                } else {
                    if (av[*retPlane].cont == 0) {
                        printf("Voo lotado!\n");
                        printf("Pressione enter para continuar!!\n");
                        setbuf(stdin, NULL);
                        getchar();
                    } else {
                        system("clear || cls");
                        printf(">Lista de Poltronas<<\n");
                        for (int i = 0; i < MAX_PEOPLE; i++) {
                            av[*retPlane].places[i] == 0 ? printf("Poltrona %d [Disponivel]\n", i + 1) : printf("Poltrona %d [Indisponivel]\n", i + 1);
                        }
                        setbuf(stdin, NULL);
                        printf("Escolha a poltrona a qual deseja embarcar: ");
                        scanf("%hd", &subChoice);

                        if (av[*retPlane].places[subChoice - 1] != 0 || (subChoice - 1) >= MAX_PEOPLE) {
                            do {
                                system("clear || cls");

                                if ((subChoice - 1) >= MAX_PEOPLE)
                                    printf("Poltrona Inexistente!!, Tente novamente\n");
                                else if (av[*retPlane].places[subChoice - 1] != 0)
                                    printf("Poltrona Ocupada!!, Tente novamente\n");

                                printf("Escolha a poltrona a qual deseja embarcar: ");
                                scanf("%hd", &subChoice);

                            } while (av[*retPlane].places[subChoice - 1] != 0 || (subChoice - 1) >= MAX_PEOPLE);
                        }

                        system("clear || cls");
                        printf("Nome: ");
                        setbuf(stdin, NULL);
                        fgets(av[*retPlane].reg[subChoice - 1].name, 50, stdin);
                        printf("Cpf: ");
                        fgets(av[*retPlane].reg[subChoice - 1].cpf, 50, stdin);
                        av[*retPlane].reg[subChoice - 1].chair = subChoice;

                        av[*retPlane].cont--;
                        av[*retPlane].places[subChoice - 1] = 1;
                        proofTicket(av, *retPlane, (subChoice - 1));
                    }
                }

                break;
        }

    } while (choice != 3);

    return 0;
}