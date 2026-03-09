#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main() {
    int maior = 0;
    int i;
    int array [MAX];

    for (i = 0; i < MAX; i++) {
        printf("Entre com um numero na posicao %d: ", i);
        scanf("%d", &*(array + i));

        if (*(array+i) > maior) {
            maior = *(array+i);
        }
    }

    for (i=0; i < MAX; i++) {
        printf("%d ", *(array+i));
    }
    printf("\n");
    
    printf(" maior numero do vetor: %d  .... ", maior);
    return 0;
}
