#include <stdio.h>
#include <string.h>

int main() {
	char string[31];
	int lido;
	char marte[31];
	int eh_marte = 1;
	
	strcpy(marte, "marte");
	
	do {
		lido = scanf("%s", string);
		if (strcmp(string, marte)==0) {
			eh_marte = 0;
		}
	} while(lido==1);
	
	if (eh_marte == 0) {
		printf("Leonardo Cicero Marciano");
	} else if (eh_marte == 1) {
		printf("none");
	}
	
	
	return 0;
}
