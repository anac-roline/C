// o laço while é usado quando não sabemos exatamente quantas vezes o 
// código dentro do laço precisará ser executado.
// a estrutura básica é:
// while (condição){
//      código a ser executado
//      lembre-se de atualizar a condição dentro do laço para evitar
//      loops infinitos
// }

#include <stdio.h>

int main(){
    int i = 1; //variavel de controle
    while (i <= 5){ //condição: ENQUANTO i for menor ou igual a 5
        printf("%d\n", i); // imprime o valor atual de i
        i++; // incremento: i aumenta 1 a cada iteração

    }
    return 0;
}