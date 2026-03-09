#include <stdio.h>
#include <stdlib.h>

int main() {

    int num_vetor, i, *array, novo_num_vetor;

    printf("Entre com o valor inicial de elmentos do vetor: ");
    scanf("%d", &num_vetor);

    array = calloc(num_vetor,sizeof(int));

    for (i =0; i < num_vetor; i++) {
        printf("Entre com um elemento na posicao %d: ", i);
        scanf("%d",&array[i]);
    }
    printf("\n");

    for (i =0; i < num_vetor; i++) {
        printf("%d ", *(array+i));
    }
    printf("\n\n");

    printf("Entre com uma nova quantidade de elementos(maior que a anterior): ");
    scanf("%d", &novo_num_vetor);

    array = realloc(array, novo_num_vetor * sizeof(int));

    for (i = num_vetor ; i < novo_num_vetor; i++) {
        printf("Entre com um elemento na posicao %d: ", i);
        scanf("%d",&array[i]);
    }
    printf("\n");


    for (i =0; i < novo_num_vetor; i++) {
        printf("%d ", *(array+i));
    }

    free(array);


    return 0;
}