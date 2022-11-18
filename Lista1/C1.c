#include <stdio.h>

int main() {
	
	int N, J, Z;
	int contador;
	int diferenca;
	int total[100];
	int numero_teste = 1;
	int total_imprimir = 0;
	scanf("%d", &N);
	while(N!=0) {
		
		for (contador = 0; contador < N; contador++) {
			scanf("%d %d", &J, &Z);
			diferenca = J - Z;
			total[contador] = diferenca;
		}
		printf("Teste %d\n", numero_teste);
		for (contador = 0; contador < N; contador++) {
			total_imprimir += total[contador];
			printf("%d\n", total_imprimir);
		}
		printf("\n");
		numero_teste++;
		total_imprimir = 0;
		scanf("%d", &N);
	}
	
	return 0;
}
