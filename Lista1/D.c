#include <stdio.h>

int main() {
	
	int numero;
	int lidos = 0;
	int retorno_scanf;
	do {
		retorno_scanf = 0;
		numero = 0;
		retorno_scanf = scanf("%d", &numero);
		if (retorno_scanf==1) {
			lidos += retorno_scanf;
		}
	} while(retorno_scanf==1);
	printf("%d", lidos);
	return 0;
}
