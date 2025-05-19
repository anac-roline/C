#include <stdio.h>

int main() {
    int mes;
    char genero;
    int cliente;
    int pagamento;
    float n1, n2;
    int tipo_operacao;

    
    printf("Digite um mês: ");
    scanf("%d", &mes);

    switch (mes){
        case 1:
            printf("janeiro\n");
            break;
        case 2:
            printf("Fevereiro\n");
            break;
        case 3:
            printf("Março\n");
            break;
        default:
            printf("Esse mês não existe\n");
            break;
    }




    printf("Qual seu genero: (H, M) ");
    scanf(" %c", &genero);

    switch (genero){
        case 'H':
            printf("Homem\n");
            break;
        
        case 'M':
            printf("Mulher\n");
            break;
        
        default:
            printf("Erro!\n");
            break;
    }

 
     printf("Digite o tipo de cliente: ");
     scanf("%d", &cliente);

    switch (cliente)
    {
    case 1:
        printf("Cliente novo recebe 10%% de desconto\n");
        break;

    case 2:
        printf("Cliente vip recebe 15%% de desconto\n");
        break;
    
    default:
        printf("Cliente inexistente\n");
        break;
    }


    printf("Escolha um tipo de pagamento: \n");
    printf("1. À vista\n");
    printf("2. A prazo\n");

    scanf("%d", &pagamento);

    switch (pagamento)
    {
    case 1:
        printf("Pagamento à vista. 5%% de desconto\n");
        break;
    case 2:
        printf("Pagamento a prazo. %%5 de acrescimo\n");
        break;
    default:
        printf("Forma de pagamento inválida\n");
        break;
    }


    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);

    printf("Digite o segundo valor: ");
    scanf("%f", &n2);

    printf("Digite o tipo de operação: \n");
    printf("1. soma\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");

    scanf("%d", &tipo_operacao);

    switch (tipo_operacao)
    {
    case 1:
        printf("O valor da soma é %f \n", n1 + n2);
        break;
    
    case 2:
        printf(" O valor da subtração é %f \n", n1 - n2);
        break;
    
    case 3:
        printf("O valor da multiplicação é %f \n", n1 * n2);
        break;
    case 4:
        printf("O valor da divisão é %f \n", n1 / n2);
        break;
    
    default:
        printf("Opção incorreta!\n");
        break;
    }

    return 0;
}
