#include <stdio.h>

int main(void) {
	int A, B, C;
	int soma_doutorando;
	
	scanf("%d %d %d\n", &A, &B, &C);
	scanf("%d", &soma_doutorando);
	
	int soma_real = A + B + C;
	
	if (soma_doutorando == soma_real) {
		printf("Acertou\n");
	} else {
		printf("Errou\n");
	}
	
	return 0;
}
