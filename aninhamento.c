#include <stdio.h>

int main(){
    int opcao;

    printf("Entre com um número inteiro:\n");
    scanf("%d", &opcao);

    //Aninhamento de estruturas if else:

    if(opcao >= 0){
        if(opcao == 0){
            printf("\nNúmero nulo.\n");
        } else{
            printf("\nNúmero positivo.\n");
        }
    } else{
        printf("\nNúmero negativo.\n");

    }
}