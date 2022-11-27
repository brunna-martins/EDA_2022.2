#include <stdio.h>



int main (void) 
{
	int T, N;
	char meu_time[11];
	int i;
	int empates;
	int meu_result;
	int aux;
	
	while (scanf("%d %d", &T, &N) >= 2 && T != 0){
		empates = 0;
		aux=0;
		getchar();
		for (i=0; i<T; i++) {
			scanf("%s %d", meu_time, &meu_result);
			aux+=meu_result;
		}
		empates=N*3-aux;
		printf("%d\n", empates);
	}
	
	return 0;
}
