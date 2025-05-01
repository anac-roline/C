#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Operador % retorna o resto da divisão 

    if (numero % 2 == 0) { // Se o resto da divisão por 2 for 0

        printf("%d é par!\n", numero);
    } else {
        printf("%d é ímpar!\n", numero);
    }
    return 0;
}