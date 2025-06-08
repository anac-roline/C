#include <stdio.h>

int main() {
    int n, primeiro = 0, segundo = 1, proximo, i;

    printf("Quantos termos da sequência Finanacci: ");
    scanf("%d", &n);

    printf("Sequência de Fibonacci:\n");

    for (i = 0; i < n; i++) { // Loop para n iterações
        if (i <= 1) {
            proximo = i; //Primeiros 2 termos são 0 e 1
        } else {
            proximo = primeiro + segundo;
            primeiro = segundo;
            segundo = proximo;
        }
        printf("%d", proximo);
    }
    return 0;
}