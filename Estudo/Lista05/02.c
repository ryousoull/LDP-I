#include <stdio.h>
#define LINHAS 2
#define COLUNAS 3

int main() {

  int matriz_A [LINHAS][COLUNAS] = {
    {1,2,3},
    {4,5,6}
  };

  int matriz_B [LINHAS][COLUNAS] = {
    {7,8,9},
    {10,11,12}
  };

  int matriz_C [LINHAS][COLUNAS];


  for (int i = 0; i < LINHAS; i++) {
    for (int j = 0; j < COLUNAS; j++) {
      matriz_C[i][j] = (matriz_A[i][j] + matriz_B[i][j]) * 2;
    }
  }

  printf("Matriz Resultante =\n");
  for (int i = 0; i < LINHAS; i++) {
    printf("| ");
    for (int j = 0; j < COLUNAS; j++) {
      printf("%2d ", matriz_C[i][j]);
    }
    printf("|\n");
  }

  return 0;
}