#include <stdio.h>

int main() {

  int cont_par = 0, cont_impar = 0, cont_positivo = 0, cont_neg = 0, num = -1;


  while (num!=0)
  {
    printf("Informe um numero: ");
    scanf("%d", &num);

    if (num > 0) {
      cont_positivo += 1;
      if (num % 2 == 0) {
        cont_par +=1;
      } else {
        cont_impar +=1;
      }
    } else if (num < 0) {
      cont_neg += 1;
    }
  }

  printf("Contadores --> Positivos: %d , Pares: %d , Impares: %d , Negativos: %d", cont_positivo, cont_par, cont_impar,cont_neg);
  

  return 0;
}