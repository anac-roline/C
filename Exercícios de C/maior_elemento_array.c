#include <stdio.h>

int main() {
    int tamanho;

    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

    int numeros[tamanho]; // Declara array com tamanho informado

    // Preenche o array
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &numeros[i]);
    }

    int maior = numeros[0]; // Assume primeiro elemento como maior

    //Percorre array comparando elementos
    for (int i = 1; i < tamanho; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    printf("O maior elemento é: %d\n", maior);
    return 0;

}