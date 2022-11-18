#include <stdio.h>
#include <string.h>
#define TAMANHO 100000

int main() {
	
	int N; // numero de vezes que jogaram par ou impar
	int contador;
	char numeros[TAMANHO];
	int alice, beto = 0;
	
	scanf("%d", &N);
	
	while (N!=0) {
		getchar();
		fgets(numeros, TAMANHO, stdin);
		alice = 0;
		beto = 0;
		for (contador = 0; contador < strlen(numeros); contador++) {
			if (numeros[contador] == '0') {
				alice++;
			} else if (numeros[contador] == '1') {
				beto++;
			}
		}
		printf("Alice ganhou %d e Beto ganhou %d\n", alice, beto);
		scanf("%d", &N);
	} 
	return 0;
}
