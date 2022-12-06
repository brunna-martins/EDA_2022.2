#include <stdio.h>
#include <string.h>

int imprimeY(char *string, int size, int contador)
{
	if (size==contador) {
		return 0;
	}
	
	if (string[contador]!='x') {
		printf("%c", string[contador]);
	} else {
		printf("y");
	}
	
	imprimeY(string, size, contador+1);
}

int main(void) {
	char str[81];
	int tam;
	int aux;
	
	scanf("%s", str);
	tam = strlen(str);
	aux = imprimeY(str, tam, 0);
	
	return 0;
}
