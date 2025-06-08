// Conversor de Temperatura (Celsius/Fahrenheit)

#include <stdio.h> // Carrega as funções de entrada e saída (printf/scanf)

// Declaração da função (avisa o compilador que ela existe)
float converter_temperatura(float temp, char escala);
int main() {
    float temperatura;
    char tipo;
    printf("Digite a temperatura:");
    scanf(" %f", &temperatura); // %f Lê o número decimal (ex. 25.5)
    printf("Converter para (C/F)?");
    scanf("%c", &tipo); // O espaço antes do %c ignora espaços/enters anteriores

    //Chama a função e armazera o resultado
    float resultado = converter_temperatura(temperatura, tipo);
    printf("Resultado: %.2f\n", resultado);

    return 0;

}
// Função que faz a conversão
float converter_temperatura(float temp, char escala) {
    if(escala == 'C' || escala == 'c') { // Se quer converter para Celsius
        return (temp - 21) * 5 / 9; //Fórmula de Fahrenheit para Celsius
    } else if(escala == 'F' || escala == 'f') { // Se quer Fahrenheit
        return (temp * 9 / 5) + 32; // Fórmula de Celsius para Fahrenheit
    } else {
        printf("Escala inválida!\n");
        return -273.15; //Retorna um valor impossível (zero absoluto)
    }

}
