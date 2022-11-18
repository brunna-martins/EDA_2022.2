#include <stdio.h>
#include <string.h>

int main(void)
{

	int L; // quantas linhas eu vou ler
	int l; // contador para leitura de linhas
	int minha_linha;
	int minha_coluna;
	char comando;
	int lido;
	int i;

	scanf("%d\n", &L);

	char str[L + 1][1001];

	for (l = 0; l < L; l++)
	{
		memset(str[l], 0, 1001);
	}

	for (l = 0; l < L; l++)
	{
		scanf(" %1000[^\n]s", str[l]);
	}

	scanf("%d %d", &minha_linha, &minha_coluna);

	/*for (l = 0; l < L; l++) {
		printf("%s", str[l]);
	}*/

	// printf("%d %d\n", minha_linha, minha_coluna);

	// printf("%c\n", str[minha_linha-1][minha_coluna-1]);

	do
	{

		lido = scanf("%c", &comando);
		// printf("%c\n", comando);

		if (lido != 1)
		{
			break;
		}

		if (comando == 'j')
		{
			if (minha_linha == L)
			{

				if (str[minha_linha - 1][minha_coluna - 1] == '\0' || str[minha_linha - 1][minha_coluna - 1] == '\n')
				{
					i = minha_coluna - 1;
					while (str[minha_linha - 1][i] == '\0' || str[minha_linha - 1][i] == '\n')
					{
						i--;
					}
					printf("%d %d %c\n", minha_linha, i + 1, str[minha_linha - 1][i]);
				}
				else
				{
					printf("%d %d %c\n", minha_linha, minha_coluna, str[minha_linha - 1][minha_coluna - 1]);
				}
			}
			else
			{
				minha_linha = minha_linha + 1;
				if (str[minha_linha - 1][minha_coluna - 1] == '\0' || str[minha_linha - 1][minha_coluna - 1] == '\n')
				{
					i = minha_coluna - 1;
					while (str[minha_linha - 1][i] == '\0' || str[minha_linha - 1][i] == '\n')
					{
						i--;
					}
					printf("%d %d %c\n", minha_linha, i + 1, str[minha_linha - 1][i]);
				}
				else
				{
					printf("%d %d %c\n", minha_linha, minha_coluna, str[minha_linha - 1][minha_coluna - 1]);
				}
			}
		}
		else if (comando == 'k')
		{
			if (minha_linha == 1)
			{

				if (str[minha_linha - 1][minha_coluna - 1] == '\0' || str[minha_linha - 1][minha_coluna - 1] == '\n')
				{
					i = minha_coluna - 1;
					while (str[minha_linha - 1][i] == '\0' || str[minha_linha - 1][i] == '\n')
					{
						i--;
					}
					printf("%d %d %c\n", minha_linha, i + 1, str[minha_linha - 1][i]);
				}
				else
				{
					printf("%d %d %c\n", minha_linha, minha_coluna, str[minha_linha - 1][minha_coluna - 1]);
				}
			}
			else
			{
				minha_linha = minha_linha - 1;
				if (str[minha_linha - 1][minha_coluna - 1] == '\0' || str[minha_linha - 1][minha_coluna - 1] == '\n')
				{
					i = minha_coluna - 1;
					while (str[minha_linha - 1][i] == '\0' || str[minha_linha - 1][i] == '\n')
					{
						i--;
					}
					printf("%d %d %c\n", minha_linha, i + 1, str[minha_linha - 1][i]);
				}
				else
				{
					printf("%d %d %c\n", minha_linha, minha_coluna, str[minha_linha - 1][minha_coluna - 1]);
				}
			}
		}

	} while (lido == 1);
}
