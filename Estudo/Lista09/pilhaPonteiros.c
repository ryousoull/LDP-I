#include <stdio.h>
#include <stdlib.h>

struct node {
  int valor;
  struct node *prox;
};

typedef struct node pilha;

void push(pilha *head) {
  int valor;
  printf("Entre com o valor para ser adicionado: ");
  scanf("%d", &valor);

  pilha *novo = (pilha*)malloc(sizeof(pilha));
  if (novo == NULL) return;

  novo->valor = valor;
  novo->prox = head->prox; 
  head->prox = novo;
}

void pop (pilha *head) {

  printf("Removendo..");
  

  if(head->prox == NULL) {
    printf("Lista vazia..\n")
    return;
  }

  pilha *remover = head->prox;
  head->prox = remover->prox;

  printf("Desempilhado: %d\n", remover->valor);
  free(remover);
}


void imprimir(pilha *head) {
  pilha *item = head->prox;
  printf("PILHA: \n");
  while (item != NULL) {
    printf("[%d] ", item->valor);
    item = item->prox;
  }
  printf("\n");

}