#include <stdio.h>
#include <string.h>
#define TAMANHO 49

int main() {

  char frase [TAMANHO];
  char caracter;
  int cont = 0;

  printf("Informe o conjunto de caracteres (string): ");
  fgets(frase, TAMANHO, stdin);

  printf("Informe o caracter a ser buscado: ");
  scanf(" %c", &caracter);

  int comprimento = strlen(frase);

  for (int i = 0; i < comprimento; i++)
  {
    if (frase[i] == caracter) {
      cont++;
    }
  }

  printf("---------------------------\n");
  printf("Quantidade de vezes que '%c' aparece na string: %d\n", caracter, cont);
  







  return 0;
}