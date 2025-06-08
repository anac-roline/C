#include <stdio.h>

int main(){
    int opcao;

    float num1, num2, resultado;
    
    printf("Escolha a operação: \n");
    
    printf("1. Adição\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");

    scanf("%d", &opcao);

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    if (opcao == 1){

        resultado = num1 + num2;
        printf("Resultado: %.2f\n", resultado);

    } else if (opcao == 2){
        resultado = num1 - num2;
        printf("Resultado: %.2f\n", resultado);
    } else if (opcao == 3){
        resultado = num1 * num2;
        printf("Resultado: %.2f", resultado);
    } else if (opcao == 4){
        if (num2 != 0) {
            resultado = num1 / num2;
            printf("Resultado: %.2f\n", resultado);
        } else {
            printf("Erro! Divisão por zero\n");
        }
    } else {
        printf("Opção inválida!\n");
    }

    return 0;

}