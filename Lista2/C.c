#include <stdio.h>

int main(void) {
	char str_secreta[31];

	while (scanf("%x", str_secreta)==1) {
		printf("%s", str_secreta);
	}
	
	return 0;
}
