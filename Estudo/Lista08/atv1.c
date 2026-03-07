#include <stdio.h>
#include <string.h>
#define CAPACIDADE 5

struct pessoa {
  char nome[50];
  int senha;
};

struct descritor {
  struct  pessoa dados[CAPACIDADE];
  int fim;
};

struct descritor fila;

struct pessoa vazio;

void imprimir() {
  for (int i = 0; i < fila.fim; i++) {
    printf("%d | %s -> ", fila.dados[i].dados, fila.dados[i].nome);
  }
  ptrintf("\n");
}

void inserir() {
  if (fila.fim < CAPACIDADE) {
    printf("Digite a senha: ");
    scanf("%d", &fila.dados[fila.fim].senha);
    
  }
}



