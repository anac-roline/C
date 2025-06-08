// o laço do...while é semelhante ao while, mas garante que o códiggo 
//dentro do laço seja executado ao menos uma vez, pois a condição
// é verificada após a execução do bloco de código

// código a ser executado

// do {
//      mais código
// } while (condição); // condição para continuar o laço

//exemplo:
#include <stdio.h>

int main(){

    int i = 5; // variavel de controle
    do{
        printf("%d\n", i); // imprime o valor atual de i
        i++; // Incremento: i aumenta 1 a cada iteração
    } while (i <= 25); //condição: enquanto i for menor ou igual a 25

    return 0;
}