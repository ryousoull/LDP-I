#include <stdio.h>
#include <stdlib.h>

/* Definir a Estrutura No */

struct no
{
  int dado;
  struct no *proximo;
};

// variaveis Globais
int op;
typedef struct no *ptr_no; // definição de uma estrutura tipo "no" (nome: *ptr)
ptr_no lista; // cria a linked list


// Prototipação
void menu () {
  printf("\nEntre com uma das opcoes: \n");
  printf("1 - Inserir um elemento no finak da lista\n");
  printf("2 - Remover um elemento da lista\n");
  printf("0 - Sair\n");
}

void lista_mostrar(ptr_no lista) {
  while (lista->proximo != NULL) {
    printf("%d ", lista->dado);
    lista = lista->proximo;
  }
  printf("%d ", lista->dado);
}

void lista_inserir(ptr_no lista) {

  int valor;
  printf("Informe um número para ser armazenado: ");
  scanf("%d", &valor);

  while (lista->proximo != NULL) {
    lista = lista->proximo; // autoincremento para percorrer o final da lista e achar o ultimo elemento da lista
  }
  // uma vez que acha o final da lista?
  lista->proximo = (ptr_no)malloc(sizeof(struct no)); // final da lista que estava apontando para o NULL vai apontar agora para o novo endereço de memoria
  lista = lista->proximo;
  lista->dado = valor;
  lista->proximo = NULL;
}

void lista_remover(ptr_no lista) {
  
  int valor;
  printf("Informe um numero para ser removido da lista: ");
  scanf("%d", &valor);

  // Auxiliar
  ptr_no aux;
  aux = (ptr_no)malloc(sizeof(struct no));

  while(lista->dado != valor) {
    
  }

  

}


int main() {

  // cria o primeiro "no" da lista (referência)
  lista = (ptr_no)malloc(sizeof(struct no)); // alocação dinamica
  lista->dado = 0;
  lista->proximo = NULL;

  do
  {
    system("cls");
    lista_mostrar(lista);
    menu();
    scanf("%d", &op);
    switch (op)
    {
    case 1:
      lista_inserir(lista);
    case 2:
    lista_remover(lista);
    }
  } while (op != 0);
  return 0;
}
