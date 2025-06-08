#include <stdio.h>
int main() {
    int numero;
    printf("Informe sua idade:\n");
    scanf("%d", &numero);
    printf("A idade do usuário é: %d\n", numero);
    printf("Então a idade do usuário sendo %d logo ele é maior de idade, ja pode dirigir e tirar a carteira de motorista", numero);
    return 0;
}