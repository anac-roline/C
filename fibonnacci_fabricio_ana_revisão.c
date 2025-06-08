#include <stdio.h>

int main(){
    //declara uma variavel inteira p armazenar a quandtidade 
    //de termos
    // da sequencia
    int quantidade_termos;

    // imprime msg p usuário digitar a quantidade de termos da sequencia
    printf("Digite a quantidade de termos da sequencia: ");
    scanf("%d", &quantidade_termos);

    //verifica se a quantidade de teermos da sequencia é menor que 3
    if (quantidade_termos < 3) {
        printf("Quantidade maior que 2");
        return 1; // retorna 1 para indicar que o programa terminou com erro
    }
    // declara tres variáveis inteiras p armazenar os ultimos dois termos
    // da sequencia e um termo temporario
    int ultimo = 0, penultimo = 0, temp = 0;

    // inicia um loop for que irá executar a quantidade de termos da sequencia vezes
    for (int i = 0; i < quantidade_termos; i++){
        // verifica se é o primeiro termo da sequencia (i ==0)
        if (i ==0){
            // se for o primeiro termo, imprime 0 e define o penultimo termo como 0
            printf("0 ");
            penultimo = 0;
            // usa o comando ccontinue pra pular p a proxima iteração do loop
            continue;
        }
        // verifica se é o segundo termo da sequencia (i == 1)
        if (i == 1){
            // se for o segundo termo imprime 1 e define o ultimo termo como 1
            printf("1 ");
            ultimo = 1;
            //usa o comando continue pra pular p a proxima iteração do loop
            continue;
        }

        // se nao for o primeiro ou o segundo termo calcula o proximo termo da sequencia
        //armazena o valor do ultimo termo na variavel temp
        temp = ultimo;
        // calcula o novo valor do ultimo termo como a soma do penultimo e do ultimo termo
        ultimo = penultimo + ultimo;
        //atualiza o penultimo termo com o valor armazenado na variável temp
        penultimo = temp;

        // imprime o novo valor do ultimo termo
        printf("%d ", ultimo);
    }

    // retorna 0 para indicar que o programa terminou com sucesso
    return 0;

}