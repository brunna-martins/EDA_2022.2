#include <stdio.h>
#include <string.h>

void move_x_to_end(char my_string[], int i, int l) 
{
	if (i >= l) {
		return;
	}
	
	char my_char = my_string[i];
	
	if (my_char != 'x') {
		printf("%c", my_char);
	}
	
	move_x_to_end(my_string, i + 1, l);
	
	if (my_char == 'x') {
		printf("%c", my_char);
	}
}


int main(void) 
{
	char my_string[101];
	
	scanf("%s", my_string);
	
	int l = strlen(my_string);
	
	move_x_to_end(my_string, 0, l);
	
	return 0;
}
