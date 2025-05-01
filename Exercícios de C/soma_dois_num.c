#include <stdio.h>

int main() {
    int num1, num2, soma; // Declara 3 variáveis inteiras

    // Entrada de dados
    printf("Digite o primeiro número: ");
    scanf("%d", &num1); // Lê um inteiro e armazena em num1
    // & obtém o endereço na memória da variável

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    soma = num1 + num2; // Calcula a soma

    // Saída formatada
    printf("A soma de %d + %d = %d\n", num1, num2, soma);

    return 0;





}