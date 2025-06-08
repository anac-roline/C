#include <stdio.h>

int main(){
    int i = 1; // Variável de controle

    while (i <= 5){ //Condição: enquanto i for menor ou igual a 5
        printf("%d\n", i); // Imprime o valor atual de i
        i++; // Incremento: i aumenta 1 a cada iteração
    }
    return 0;
}