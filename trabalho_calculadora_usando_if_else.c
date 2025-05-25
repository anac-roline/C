// Inclui a biblioteca padrão de entrada e saída do C
#include <stdio.h>

// Função principal do programa, onde o código é executado
int main() {

    // Declara uma variável para armazenar a opção escolhida 
    // pelo usuário
    int opcao;

    // Declaara variáveis para armazenar os dois números a serem
    //  operados
    float num1, num2, resultado;

    // Exibe uma mensagem para o usuário escolher a opção
    printf("Escolha a operação:\n");

    // Exibe as opções disponíveis para o usuário
    printf("1. Adição\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");

    // Lê a opção escolhida pelo usuário e armazena na variável opcao
    scanf("%d", &opcao);

    // Exibe uma mensagem para o usuário digitar o primeiro número
    printf("Digite o primeiro número: ");

    // Lê o primeiro número e armazena na variável num1
    scanf("%f", &num1);

    // Exibe uma mensagem para o usuário digitar o segundo número
    printf("Digite o segundo número: ");

    // Lê o segundo número e armazena na variável num2
    scanf("%f", &num2);

    // Utiliza a estrutura if-else para executar a operação escolhida
    if (opcao == 1)
    {
        // Caso a opção escolhida seja 1, executa a adição
        //Calcula a soma de num1 e num2 e armazena na variável 
        // r4esultado
        resultado = num1 + num2;

        // Exibe o resultado da operação
        printf("Resultado: %.2f\n", resultado);  
    } else if (opcao == 2) 
    {
        // Caso a opção escohida seja 2, executa a subtração
        // Calcula a diferença de num1 e num2 e armazena na variável 
        // resultado
        resultado = num1 - num2;

        // Exibe o resultado da operação
        printf("Resultado: %.2f\n", resultado);
    } else if (opcao == 3) 
    {
        // Caso a opção escolha seja 3, executa a multiplicação
        // Calcula a multiplicação de num1 e num2 e armazena na
        //  variável resultado
        resultado = num1 * num2;

        // Exibe o resultado da operação
        printf("Resultado: %.2f\n", resultado);
    } else if (opcao == 4)
    {
        // Caso a opção escolhida seja 4, executa a divisão
        // Verifica se o segundo número é diferente de 0
        if (num2 != 0)
        {
            // Calcula  a divisão de num1 e num2 e armazena na 
            // variável resultado
            resultado = num1 / num2;

            // Exibe o resultado da operação
            printf("Resultado: %.2f\n", resultado);
        } else {

            // Exibe uma mensagem de erro se o segundo número 
            // for zero
            printf("Erro: Divisão por zero\n");
        }
    } else {
        
        // Caso a opção seja inválida, exibe uma mensagem de erro
        printf("Opção inválida!\n");
    }

    // Retorna 0 para indicar que o programa foi executado com sucesso
    return 0;
    
}