#include <stdio.h>

int ehPrimo (int num, int i) {
  if (num < 2){
    return 0;
  }

  if (num % i == 0) {
    return 0;
  }

  if (i * i > num) {
    return 1;
  }

  return ehPrimo(num, i + 1);
}


int main() {

  int num;

  printf("Informe um numero: ");
  scanf("%d", &num);

  printf("%d", ehPrimo(num, 2));
  
  return 0;
}