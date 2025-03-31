Algoritmo:
Ínicio
Ler 5 números
Inicializar soma= 0
Loop somar elementos
Exibir somar
Fim
*/

int main () {
    int numeros [5], soma = 0;
    
    printf ("Digite 5 números:\n");
    for (int i = 0; i < 5; i++) {
        scanf ("%d", &numeros[i]);
        soma += numeros[i];
    }
    
    printf ("Soma: %d\n", soma);
    return 0;
}
