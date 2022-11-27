#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int soma(char *number, int i, int size, int sum)
{
	int meu_numero;
	if (i >= size) {
		return sum;
	}
	meu_numero = number[i] - 48;
	sum += meu_numero;
	soma(number, i+1, size, sum);
}

int main(void)
{
	char numero[13];
	int tamanho;
	int minha_soma = 0;
	scanf("%s", numero);
	tamanho = strlen(numero);
	minha_soma = soma(numero, 0, tamanho, minha_soma);
	printf("%d\n", minha_soma);
	return 0;
}
