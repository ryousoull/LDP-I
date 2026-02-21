#include <stdio.h>
#define TAMANHO 10
int main() {

  int vetor[TAMANHO], aux;

  for (int i = 0; i < TAMANHO; i++) {
    printf("Informe um numero: ");
    scanf("%d", &vetor[i]);
  }

  for (int i = 0; i < TAMANHO - 1; i++) {
      for (int j = 0; j < TAMANHO - 1; j++) {
        if (vetor[j] < vetor[j + 1]) {
          aux = vetor[j];
          vetor[j] = vetor[j+1];
          vetor[j+1] = aux;
        }
      }
  }

  for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

  


  return 0;
}