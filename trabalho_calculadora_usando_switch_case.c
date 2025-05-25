// Inlcui a biblioteca padrão de entrada e saída do C
#include <stdio.h>

// Função principal do programa, onde o código é executado
int main() {

    // Declara uma variávele para armazenar a opção escolhida 
    //pelo usuário
    int opcao;

    // Declara variáveis para armazenar os dois números 
    // a serem operados
    float num1, num2, resultado;

    // Exibe uma mensagem para o usuário escolher a operação
    printf("Escolha a operação:\n");

    // Exibe as opções disponíveis para o usuário
    printf("1. Adição\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");

    // Lê a opção escolhida pelo usuário e armazena na variável opcao
    scanf("%d", &opcao);

    // Exibe um amensagem para o usuário digitar o primeiro número
    printf("Digite o primeiro número: ");

    // Lê o primeiro número e armazena na variável num1
    scanf("%f", &num1);

    // Exibe a mensagem para o usuário digitar o segundo número
    printf("Digite o segundo número: ");


    //Lê o segundo número e armazena na variável num2
    scanf("%f", &num2);

    // Utiliza a estrutura switch-case para executar a 
    //operação escolhida
    switch (opcao)
    {
        case 1:
        // Calcula a soma de num1 e num2 e armazena na variável
        // resultado
            resultado = num1 + num2;

        // Exibe o resultado da operação
        printf("Resultado: %.2f\n", resultado);

        // Sai do bloco de código do case
        break;

         // Caso a opção seja 2, executa a subtração
        case 2:
        // Calcula a subtração de num1 e num2 e armazena na variável 
        //resultado
            resultado = num1 - num2;

        // Exibe o resultado da operação
            printf("Resultado: %.2f\n", resultado);

        // Sai do bloco de código do case
        break;
        // Caso a opção seja 3, executa a multiplicação
        case 3:
            // Calcula a multiplicação de num1 e num2 e armazena 
            // na variável resultado
            resultado = num1 * num2;

            // Exibe o resultado da operação
            printf("Resultado: %.2f\n", resultado);

        // Sai do bloco de código do case
        break;
        // Caso a opção seja 4, executa a divisão
        case 4:
        // Verifica se o segundo número é diferente de zero
            if (num2 != 0){

                // Calcula a divisão de num1 e num2 e armazena na 
                // variável resultado
                 resultado = num1 / num2;

                 // Exibe o resultado da operação
                printf("Resultado: %.2f\n", resultado);
            } else {

                //Exibe uma mensagem de erro se o segundo número 
                // for zero
                 printf("Erro: Divisão por zero!\n");
            }

            // Sai do bloco de código do case
            break;

        // Caso a opção seja inválida, exxibe uma mensagem de erro
        default:
            printf("Opção inválida!\n");

            // Sai do bloco de código do default
            break;
    }

    // Retorna 0 para indicar que o programa foi executado com sucesso
    return 0;

}






