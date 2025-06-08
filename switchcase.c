#include <stdio.h>

int main(){
    int opcao;

    printf("Entre com 1- para adicionar e2- para excluir:\n");
    scanf("%d", &opcao);

    // Switchcase:

    switch (opcao)
    {
        case 1:
        printf("\nNúmero 1.\n");
            break;
        case 2:
            printf("\nNúmero 2.\n");
            break;
        
    
    default:
        printf("Opção inválida");
        break;
    }
    printf("Final do programa.");
}