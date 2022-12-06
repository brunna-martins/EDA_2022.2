#include <stdio.h>
#include <string.h>

int checa_par(char *string, int size, int i, int pairs)
{
	if (i>=size-2) {
		return pairs;
	}
	if(string[i]==string[i+2]) {
		pairs++;
	}
	checa_par(string, size, i+1, pairs);
}

int main (void) {
	char str[201];
	int tam, pares;
	
	scanf("%s", str);
	tam = strlen(str);
	pares = checa_par(str, tam, 0, 0);
	printf("%d", pares);
	
	return 0;
}
