// Exercício de fixação, lista duplamente encadeada com inserções e exclusões no inicio, meio e fim.
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct NO {
    unsigned int nOS;
    struct NO *prox;
    struct NO *ant;
} tSYS, *Psys;

void inserir_inicio(unsigned int nOS);                      // Insere no início da lista
unsigned int inserir_final(unsigned int nOS);               // Insere no final da lista
void mostrar_os(Psys p_inicio);                             // Mostra todas as OS
void remover_os(unsigned int nOS);                          // Remove uma OS especificada pelo usuário
Psys buscar_os(Psys p_inicio, int os);                      // Busca uma os em determinado ponto do código e retorna um ponteiro para onde ela se encontra.
void inserir_depois(unsigned int nOS, unsigned int dpsOS);  // Insere depois de uma determinada ordem de serviço.
unsigned int inserir_dados();                               // Ler o número da OS

Psys inicio, fim;
size_t tam = 0;

void mostrar_os(Psys p_inicio) {
    if (inicio == NULL) {
        system("clear");
        printf("Lista vazia!\n");
        return;
    }
    Psys aux = p_inicio;
    while (aux) {
        printf("Número da OS: %d\n", aux->nOS);
        aux = aux->prox;
    }
    printf("\n");
}

unsigned int inserir_dados() {
    unsigned int os;
    printf("Digite o número da OS: ");
    scanf("%d", &os);

    return os;
}

Psys buscar_os(Psys p_inicio, int os) {
    Psys aux = p_inicio;

    while (aux) {
        if (aux->nOS == os)
            return aux;
        else
            aux = aux->prox;
    }

    return NULL;
}

void remover_os(unsigned int nOS) {
    if (inicio == NULL || fim == NULL) {
        system("clear");
        setbuf(stdin, NULL);
        printf("Lista vazia!\n");
        printf("Pressione uma tecla para continuar..");
        getchar();
        return;
    }
    unsigned int os = 0;
    Psys excluir;

    excluir = buscar_os(inicio, nOS);

    if (excluir != NULL) {
        tam--;
        if (excluir->ant == NULL) {  // Remoção no início da lista
            if (excluir->prox) {     // Se houver um próximo
                inicio = inicio->prox;
                inicio->ant = NULL;
                free(excluir);
            } else {  // Se não houver próximo e não houver anterior, então é ó único elemento na lista
                free(excluir);
                inicio = NULL;
                fim = NULL;
            }
        } else {                  // Caso tenha elemento anterior ao que eu desejo excluir
            if (excluir->prox) {  //Se tiver um próximo, então será remoção no meio da lista
                excluir->ant->prox = excluir->prox;
                excluir->prox->ant = excluir->ant;
                free(excluir);
            } else {  // remoção no final da lista
                excluir->ant->prox = NULL;
                fim = excluir->ant;
                free(excluir);
            }
        }
        system("clear");
        setbuf(stdin, NULL);
        printf("OS [%d] Removida com sucesso!!\n", nOS);
        printf("Pressione uma tecla para continuar..");
        getchar();

    } else {
        system("clear");
        setbuf(stdin, NULL);
        printf("OS Não encontrada!!\n");
        printf("Pressione uma tecla para continuar..");
        getchar();
        return;
    }
}

void inserir_inicio(unsigned int nOS) {
    Psys novo_no = malloc(sizeof(tSYS));
    if (!novo_no) {
        perror("error");
        exit(1);
    }
    novo_no->nOS = nOS;

    if (inicio == NULL) {
        novo_no->prox = NULL;
        inicio = novo_no;
        fim = inicio;
        return;
    }
    inicio->ant = novo_no;
    novo_no->prox = inicio;
    inicio = novo_no;
}

unsigned int inserir_final(unsigned int nOS) {
    Psys novo_no = malloc(sizeof(tSYS));
    novo_no->nOS = nOS;
    tam++;

    if (!novo_no) {
        printf("Erro ao alocar memória para criação de um novo nó!");
        exit(1);
    }

    if (!inicio) {
        inicio = novo_no;
        novo_no->ant = NULL;
    }

    if (fim) {
        fim->prox = novo_no;
        novo_no->ant = fim;
    }

    novo_no->prox = NULL;
    fim = novo_no;

    return 1;
}

void inserir_depois(unsigned int nOS, unsigned int dpsOS) {
    unsigned int os = 0;
    Psys novo_no = malloc(sizeof(tSYS));
    if (!novo_no) {
        perror("error");
        exit(1);
    }
    novo_no->nOS = nOS;

    Psys os_atual;

    os_atual = buscar_os(inicio, dpsOS);

    if (os_atual != NULL) {
        if (os_atual->prox) {
            novo_no->prox = os_atual->prox;
            novo_no->ant = os_atual;
            os_atual->prox = novo_no;
        } else
            inserir_final(nOS);
    } else {
        system("clear");
        printf("OS Não encontrada!!\n");
        printf("Pressione uma tecla para continuar..");
        getchar();
        return;
    }
}

void menu() {
    setlocale(LC_ALL, "");
    unsigned short int op, os;
    Psys p;

    do {
        system("clear");
        printf("[1] - Inserir OS (Início)\n");
        printf("[2] - Inserir OS (Final)\n");
        printf("[3] - Inserir Depois\n");
        printf("[4] - Remover OS\n");
        printf("[5] - Buscar OS\n");
        printf("[6] - Mostrar OS\n");
        printf("[7] - Mensurar tamanho\n");
        printf("[0] - Sair\n");

        printf("Escolha: ");
        scanf("%hd", &op);

        switch (op) {
            case 1:
                system("clear");
                printf(">>Inserção no início<<\n");
                inserir_inicio(inserir_dados());
                break;
            case 2:
                system("clear");
                printf(">>Inserção no final<<\n");
                inserir_final(inserir_dados());
                break;
            case 3:
                system("clear");
                printf("Inserir depois da OS: ");
                scanf("%d", &os);
                inserir_depois(inserir_dados(), os);
                break;
            case 4:
                system("clear");
                printf(">>Remoção de OS<<\n");
                remover_os(inserir_dados());
                break;
            case 5:
                system("clear");
                printf("Infome o número da OS que deseja buscar: ");
                scanf("%d", &os);
                (p = buscar_os(inicio, os)) != NULL ? printf("Elemento encontrado: [%d]\n", *p) : printf("Elemento não encontrado!\n");
                setbuf(stdin, NULL);
                printf("Pressione uma tecla para continuar..");
                getchar();
                break;
            case 6:
                system("clear");
                setbuf(stdin, NULL);
                mostrar_os(inicio);
                printf("Pressione uma tecla para continuar..");
                getchar();
                break;
            case 7:
                system("clear");
                setbuf(stdin, NULL);
                printf("Tamanho atual: %zd\n",tam);
                printf("Pressione uma tecla para continuar..");
                getchar();
                break;
            default:
        }

    } while (op);
}

int main(int argc, char *argv[]) {
    menu();
    return 0;
}