#include <stdio.h>
#define TAMANHO 5
int main() {

  int vetor_a [] = {85, 90, 78, 92, 88};

  int vetor_b [] = {100,91,50,81,19};

  int vetor_c [TAMANHO];

  for(int i = 0; i < TAMANHO; i++) {
    if (vetor_a[i] > vetor_b[i]) {
      vetor_c[i] = vetor_a[i];
    } else {
      vetor_c[i] = vetor_b[i];
    }
  }

  printf("C = ");
  for (int i = 0; i < TAMANHO; i++) {
      printf("%d ", vetor_c[i]);
    }
    printf("\n");

  

  return 0;
}