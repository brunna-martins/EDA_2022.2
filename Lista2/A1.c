#include <stdio.h>

int main(void) {
	int amigos;
	int conta_amigos[11];
	int soma_doutorando;
	int i;
	int soma_real = 0;
	
	scanf("%d", &amigos);
	
	for (i=0;i<amigos;i++) {
		scanf("%d ", &conta_amigos[i]);
		soma_real += conta_amigos[i];
	}
	
	scanf("%d", &soma_doutorando);
	
	if (soma_doutorando == soma_real) {
		printf("Acertou\n");
	} else {
		printf("Errou\n");
	}
	
	return 0;
}
