#include <stdio.h>

void troca_variaveis(int *a, int *b) { 
    //Se a > b, faça a troca entre as variáveis
    if (*a > *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int a, b;

    //Armazenar os valores de entradas do usuário
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    //Chamar a função passando os valores por referência
    troca_variaveis(&a, &b);

    //Mostrando a mudança
    printf("a: %d, b: %d\n", a, b);

    return 0;
}