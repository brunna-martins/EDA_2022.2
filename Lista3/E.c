#include <stdio.h>

long int terms[81] = {0};
long int fibonacci(int n)
{	
	int result;
	if (n <= 2) {
		return 1;
	} else {
		if (terms[n]!=0) {
			return terms[n];
		} else {
			terms[n] = fibonacci(n-1) + fibonacci(n-2);
			return terms[n];
		}
	}
}

int main(void) {
	int N;
	scanf("%d", &N);
	long int result = fibonacci(N);
	printf ("%ld", result);
	return 0;
}
