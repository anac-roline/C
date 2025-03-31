#include <stdio.h>

/*
Algoritmo:
Fazer um programa
que converte Celsius
para Fahrenheit
*/

int main() {
    float celcius;
    printf ("Digite a temperatura em Celcius: ");
    scanf("%f", &celcius);
    
    float fahrenheit = (9.0 / 5.0) * celcius + 32;
    printf ("%.2f°C = %.2f°F\n", celcius, fahrenheit);
    
    return 0;
}
