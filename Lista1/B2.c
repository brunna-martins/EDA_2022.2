#include <stdio.h>

int main() {
	
	int N;
	int contador;
	int soma = 0;
	int X = 0;
	
	scanf("%d", &N);
	
	for (contador = 0; contador < N; contador++) {
		scanf("%d", &X);
		soma = soma + X;
	}
	
	printf("%d\r\n", soma);
	
	return 0;
}
