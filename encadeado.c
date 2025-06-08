#include <stdio.h>

int main(void){

    float nota;
    printf("Digite sua nota: ");
    scanf("%f", &nota);
    printf("%f\n", nota);

    if (nota < 0)
        printf("Erro: média inválida!\n");
    else if (nota > 10)
        printf("Erro: média inválida.\n");
    else if (nota >= 5)
        printf("Aluno aprovado!\n");

    else
        printf("Aluno reprovado!\n");

}