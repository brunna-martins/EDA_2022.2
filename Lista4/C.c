#include <stdio.h>
#include <string.h>

int imprime_contrario(char *string, int size)
{
	if (size==0) {
		return 0;
	}
	printf("%c", string[size-1]);
	imprime_contrario(string, size-1);
}

int main (void) {
	char str[501] = {'\0'};
	int tam, aux;
	
	scanf("%s", str);
	tam = strlen(str);
	aux = imprime_contrario(str, tam);
	
	return 0;
}
