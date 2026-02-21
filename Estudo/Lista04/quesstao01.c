#include <stdio.h>

int main() {

  int n1,n2, soma=0;

  printf("Informe o valor do numero 1: ");
  scanf("%d",&n1);

  printf("Informe o valor do numero 2: ");
  scanf("%d",&n2);

  for (int i = n1; i <= n2; i++)
  {
    if (i % 2 == 0) {
      soma += i;
    }
  }
  
  printf("A soma é: %d", soma);

  return 0;
}