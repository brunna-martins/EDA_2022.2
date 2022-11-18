#include <stdio.h>
#include <string.h>

int main() {
	int lido = 0;
	char input[4];
	char sim[4];
	int eh_sim;
	int contador = 0;
	int precisou_triagem = 0;
	
	strcpy(sim, "sim");
	
	do {
		eh_sim = 0;
		for (contador = 0; contador < 10; contador++) {
			lido = scanf("%s", input);
			if (lido!=1) {
				break;
			}
			if (strcmp(sim, input)==0) {
				eh_sim++;
			}
		}
		if ((eh_sim/2) != 0) {
			precisou_triagem++;
		}
		
	} while (lido==1);
	
	printf("%d", precisou_triagem);
	
	return 0;
}
