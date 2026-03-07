#include <stdio.h>

int ehPalindromo(int num, int temp) {
  if (num == 0) {
    return temp;
  }

  temp = temp * 10 + num % 10;

  return ehPalindromo(num / 10, temp);
}
// num = 123; temp = 0;

// 1 passo: temp = 0 * 10 + 123 % 10 -> 0 + 3

// num = 12; temp = 3
// 2 passo: temp = 3 * 10 + 2

// num = 1; temp = 32;
// 3 passo: temp = 32 * 10 + 1

// num = 0; temp = 321;
// retorna 0;

int main() {

  int num, temp;

  printf("Informe o número: ");
  scanf("%d", &num);

  if (num == ehPalindromo(num, temp = 0)) {
    printf("numero eh palindromo");
  } else {
    printf("nao eh palindromo");
  }


  return 0;
}
