//#include <stdio.h>

void swap(int *a, int *b) {
	int c;
	
	c = *a;
	*a = *b;
	*b = c;
	
}

/*int main(void) {
	int a, b;
	
	a = 100;
	b = 150;
	
	swap(&a, &b);
	printf("%d %d", a, b);
	return 0;
}*/
