#include <stdio.h>

// Declaração da função (protótipo)
long calcularFatorial(int n);

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // chamada da função
    long fatorial = calcularFatorial(numero);
    printf("O fatorial de %d é %1d\n", numero, fatorial);

    return 0;
}

// Definição da função
long calcularFatorial(int n) {
    if (n < 0) return -1; // Trata entrada inválida
    long resultado = 1;

    // Loop de multiplicação decrescente
    for (int i = 1; i <= n; i++) {
        resultado *= i; // resultado = resultado * i
    }
    return resultado;
}

