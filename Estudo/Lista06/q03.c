#include <stdio.h>
#include <string.h>
#define TAMANHO 101 

int main() {

    char frase[TAMANHO], limpa[TAMANHO];
    int i, j = 0;
    

    printf("Digite a frase (letras minusculas e espacos): ");
    fgets(frase, TAMANHO, stdin);
 
    for (i = 0; frase[i] != '\0'; i++) {
        if (frase[i] != ' ' && frase[i] != '\n') {
            limpa[j] = frase[i];
            j++; 
        }
    }
    limpa[j] = '\0'; 

    int tam = strlen(limpa); 
    int eh_palindromo = 1; 
    
    for (i = 0; i < tam / 2; i++) { 
        if (limpa[i] != limpa[tam - 1 - i]) {
            eh_palindromo = 0; 
        }
    }

    printf("--------------------------------------------------------\n");

    if (eh_palindromo && tam > 0) {
        printf("A frase eh um palindromo.");
    } else {
        printf("A frase nao eh um palindromo.");
    }

    return 0;
}