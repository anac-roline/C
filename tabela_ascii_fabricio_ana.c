/*
Alunos: Fabrício, Ana
Matrículas: 202408647476, 202408123043

Título: Linguagem C
Autor: Sílvio do Lago Pereira
Link: https://www.ime.usp.br/~slago/slago-C.pdf

Exercício: 
	Exemplo 3.6(página 22). Exibe a tabela ASCII com pausas a cada 23 linhas. 
*/

#include <stdio.h>

int main(){
	printf("------------------- TABELA ASCCI -------------------\n");
	
	int count = 0;
	for (int i = 0; i < 255; i++){
		printf("%d - %c\n", i, i);
		if (count == 23){
			printf("Presione qualquer tecla para continuar (%d - %d) ", i, i + 27);
			getchar();
			count = 0;
		}
		count++;
	}

	return 0;
}