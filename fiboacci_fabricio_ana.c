/*
Alunos: Fabrício, Ana
Matrículas: 202408647476, 202408123043

Na matemática, a sucessão de Fibonacci (ou sequência de Fibonacci), é uma sequência de números inteiros, começando normalmente por 0 e 1, na qual cada termo subsequente corresponde à soma dos dois anterioresA sequência recebeu o nome do matemático italiano Leonardo de Pisa ou Leonardo Fibonacci, mais conhecido por apenas Fibonacci, que descreveu, no ano de 1202, o crescimento de uma população de coelhos, a partir desta.
*/

#include <stdio.h>

int main(){
	int quantidade_termos;

	printf("Digite a quantidade de termos da sequencia: ");
	scanf("%d", &quantidade_termos);
	
	if (quantidade_termos < 3) {
		printf("Quantidade deve ser maior que 2");
		return 1;
	}

	int ultimo = 0, penultimo = 0, temp = 0;

	for (int i = 0; i < quantidade_termos; i++){
		if (i == 0) {
			printf("0 ");
			penultimo = 0;
			continue;
		}		
		if (i == 1) {
			printf("1 ");
			ultimo = 1;
			continue;
		}

		temp = ultimo;
		ultimo = penultimo + ultimo;
		penultimo = temp;

		printf("%d ", ultimo);
	}

	return 0;
}