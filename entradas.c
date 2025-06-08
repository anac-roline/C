#include <stdio.h>
int main() {
    char inicial;
    int idade;
    printf("Entre com a sua idade e a sua inicial:\n");
    scanf("%d", &idade);
    scanf("%c", &inicial);
    printf("Voce tem %d anos e seu nome começa com %c\n", idade, inicial);
    return 0;
}