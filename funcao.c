#include <stdio.h>

int soma(int a,int b){
    return a + b;
}

int main(){
    int n1,n2,resultado;

    n1 = 10;
    n2 = 20;

    resultado = soma(n1, n2);

    printf("A soma entre %d e %d e %d\n", n1, n2, resultado);

    return 0;
}