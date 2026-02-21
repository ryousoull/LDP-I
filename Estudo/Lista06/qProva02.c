#include <stdio.h>
#include <string.h>
#define TAMANHO 29

int main() {

  char palavra [TAMANHO];

  printf("Digite a palavra: ");
  fgets(palavra, TAMANHO, stdin);

  int comprimento = strlen(palavra);
  int i;
  int eh_palin = 1;

  while (i < comprimento / 2 && eh_palin == 1) {
    if(palavra[i] == palavra[comprimento-1-i]) {
      eh_palin = 1;
    } else {
      eh_palin = 0;
    }
    i++;
  }

  if(eh_palin == 1) {
    printf("OK");
  } else {
    printf("NO");
  }


  return 0;
}