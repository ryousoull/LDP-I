#include <stdio.h>
#include <string.h>


int eh_palindromo (char palavra[], int inicio, int fim) {
  if (inicio >= fim) {
    return 1;
  }

  if (palavra[inicio] != palavra[fim]) {
    return 0;
  }

  return eh_palindromo(palavra, inicio +1, fim - 1);
}


int main() {

  char nome[100];

  printf("Informe uma palvra: ");
  scanf("%s", nome);

  printf("%d", eh_palindromo(nome, 0, strlen(nome) - 1));

  return 0;
}

