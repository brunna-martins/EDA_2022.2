#include <stdio.h>
#include <stdlib.h>


int main() {
	int qtde_restaurantes;
	int lido;
	int cod_restaurante[201] = {-1};
	int nota_restaurante[201] = {-1};
	int i;
	int j = 0;
	int max_cod = cod_restaurante[0];
	int max_nota = nota_restaurante[0];
	int dia = 1;
	
	lido = scanf("%d", &qtde_restaurantes);
	while (lido==1) {
		for (i = 0; i < qtde_restaurantes; i++) {
			scanf(" %d %d", &cod_restaurante[j], &nota_restaurante[j]);
			if (max_nota<nota_restaurante[j]) {
				max_nota = nota_restaurante[j];
				max_cod = cod_restaurante[j];
			} else if (max_nota==nota_restaurante[j]) {
				if (max_cod>cod_restaurante[j]) {
					max_nota = nota_restaurante[j];
					max_cod = cod_restaurante[j];
				}
			}
			j++;
		}
		printf("Dia %d\n", dia);
		printf("%d\n\n", max_cod);
		dia++;
		j = 0;
		qtde_restaurantes = 0;
		max_cod = -1;
		max_nota = -1;
		lido = scanf("%d", &qtde_restaurantes);
	
	}
	
	
	
	return 0;
}
