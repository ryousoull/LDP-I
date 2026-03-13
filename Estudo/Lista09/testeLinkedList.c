#include <stdio.h>
#include <stdlib.h>

struct node {
    int valor;
    struct node *prox;
};

typedef struct node List;


int menu();
void imprime(List *head);
void inserir(List *head);
void remover(List *head);
void libera(List *head);

int main() {

    int opcao;

    List head;
    head.prox = NULL;
    head.valor = 0; 

    do {
        system("cls");
        
        
        imprime(&head);
        
        opcao = menu();

        switch(opcao) {
            case 1:
                inserir(&head);
                break;
            case 2:
                remover(&head);
                break;
            case 0:
                printf("Limpando memoria e saindo...\n");
                libera(head.prox); 
                break;
            default:
                printf("Opcao invalida!\n");
        }

        if (opcao != 0) {
            printf("\nPressione Enter para continuar...");
            setbuf(stdin, NULL);
            getchar(); 
        }

    } while (opcao != 0);

    return 0;
}


int menu() {
    int escolha;
    printf("\n--- OPERACOES ---\n");
    printf("1 - Inserir elemento\n");
    printf("2 - Remover elemento especifico\n");
    printf("0 - Sair\n");
    printf("Escolha: ");
    scanf("%d", &escolha);
    return escolha;
}

void inserir(List *head) {
    int valor;
    printf("Informe o valor: ");
    scanf("%d", &valor);

    List *now = (List*)malloc(sizeof(List));
    if (now == NULL) {
        printf("Erro de memoria!\n");
        return;
    }
    now->prox = NULL;
    now->valor = valor;

    List *atual = head;
    while (atual->prox != NULL) {
        atual = atual->prox;
    }
    atual->prox = now;
}

void remover(List *head) {
    int valor;
    printf("Informe o valor a ser removido: ");
    scanf("%d", &valor);

    List *anterior = head;
    List *atual = head->prox;

    
    while (atual != NULL && atual->valor != valor) {
        anterior = atual;
        atual = atual->prox;
    }

    if (atual != NULL) {
        anterior->prox = atual->prox; 
        free(atual);                  
        printf("Sucesso: %d removido!\n", valor);
    } else {
        printf("Erro: Valor %d nao encontrado.\n", valor);
    }
}

void imprime(List *head) {
    List *temp = head->prox;
    printf("\nESTADO DA LISTA: ");
    
    if (temp == NULL) {
        printf("Vazia");
    } else {
        while (temp != NULL) {
            printf("[%d] -> ", temp->valor);
            temp = temp->prox;
        }
        printf("NULL");
    }
}

void libera(List *head) {
    List *atual = head;
    while (atual != NULL) {
        List *temp = atual->prox;
        free(atual);
        atual = temp;
    }
}