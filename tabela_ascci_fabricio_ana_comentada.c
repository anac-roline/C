// Inclui a biblioteca padrão de entrada e saída (stdio.h) para usar funções como printf e getchar
#include <stdio.h>

// Define a função main, que é o ponto de entrada do programa
int main(){
    // Imprime uma mensagem de título para a tabela ASCII
    printf("------------------- TABELA ASCCI -------------------\n");
    
    // Declara uma variável inteira para contar o número de linhas impressas
    int count = 0;
    
    // Inicia um loop for que irá executar 255 vezes, uma para cada caractere ASCII
    for (int i = 0; i < 255; i++){
        // Imprime o código ASCII do caractere e o caractere em si
        // O %d é usado para imprimir o código ASCII como um número decimal
        // O %c é usado para imprimir o caractere correspondente ao código ASCII
        printf("%d - %c\n", i, i);
        
        // Verifica se o número de linhas impressas é igual a 23
        if (count == 23){
            // Se for igual a 23, imprime uma mensagem pedindo ao usuário para pressionar qualquer tecla para continuar
            // A mensagem também inclui o código ASCII do caractere atual e do próximo caractere que será impresso
            printf("Presione qualquer tecla para continuar (%d - %d) ", i, i + 27);
            
            // Usa a função getchar para ler um caractere do teclado e pausar o programa
            // A função getchar não armazena o caractere lido em nenhuma variável, apenas pausa o programa até que um caractere seja pressionado
            getchar();
            
            // Reinicia o contador de linhas impressas
            count = 0;
        }
        
        // Incrementa o contador de linhas impressas
        count++;
    }

    // Retorna 0 para indicar que o programa terminou com sucesso
    return 0;
}
