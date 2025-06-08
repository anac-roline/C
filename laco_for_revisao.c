// o laço for é usado quando sabemos exatamente quantas vezes queremos que o código dentro do laço seja executado.
// a estrutura básica de um laço for é a seguinte:
// for (inicialização; condição; incremente/decremento){
//          código a ser executado
//  }

// exemplo prático:
#include <stdio.h>

int main(){
    // vamos imprimir os números de 1 a 5
    for (int i = 1; i <= 10; i++){  // i é a variável de controle iniciada em 1
        //Condição: enquanto i for menor ou igual a 5
        // Incremento: i aumenta 1 a cada iteração
        printf("%d\n", i); // Imprime o valor atual de i
    }
    return 0;

}