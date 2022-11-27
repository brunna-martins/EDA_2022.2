#include <stdio.h>

int f91(int N) {
	int result;
	if (N>=101) {
		result = N - 10;
	} else {
		result = f91(f91(N+11));
	}
	
	return result;
}

int main(void) {
	int N;
	int result;
	
	scanf("%d", &N);
	while (N!=0) {
		result = f91(N);
		printf("f91(%d) = %d\n", N, result);
		scanf("%d", &N);
	}	
	return 0;
}
