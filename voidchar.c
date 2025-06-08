#include <stdio.h>
void main() {
    char letra;
    int a;
    a = 10;
    letra = 'L';
    letra = letra + a%2;
    printf("a = %d de letra = %c.\n", a, letra);
    

}