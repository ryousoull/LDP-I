#include <stdio.h>
#include <string.h>
#define ANIVERSARIANTES 3


typedef struct {
    int dia;   
    int mes;   
} Aniversario;


typedef struct {
    char primeiro_nome[50]; 
    char ultimo_nome[50];   
    Aniversario data;   
} Aniversariante;

int main() {

    Aniversariante gerenciador[ANIVERSARIANTES];
    
    printf("--- Cadastro do Gerenciador de Aniversarios ---\n");
        
    for (int i = 0; i < ANIVERSARIANTES; i++) {
        printf("\nInsira os dados do aniversariante %d:\n", i + 1);

        printf("Primeiro nome: ");
        scanf("%s", gerenciador[i].primeiro_nome); 

        printf("Utimo nome: ");
        scanf("%s", gerenciador[i].ultimo_nome); 
        
        printf("Dia do aniversario: ");
        scanf("%d", &gerenciador[i].data.dia); 
        
        printf("Mes do aniversario: ");
        scanf("%d", &gerenciador[i].data.mes);
    } 

    
    printf("\n--- Gerenciador de Aniversarios Armazenados ---\n");
    printf("| %-15s | %-15s | %s |\n", "Nome", "Sobrenome", "Aniversário");
    printf("---------------------------------------------------\n");

    for (int i = 0; i < ANIVERSARIANTES; i++) {
        printf("| %-15s | %-15s | %02d/%02d       |\n", 
               gerenciador[i].primeiro_nome,
               gerenciador[i].ultimo_nome,
               gerenciador[i].data.dia,
               gerenciador[i].data.mes
        );
    } 
    printf("---------------------------------------------------\n");

    return 0;
}