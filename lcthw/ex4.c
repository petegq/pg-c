// Intentionally broken version of ex3 for debugging

#include <stdio.h>

void crash() {
	char *test = NULL;
	int i = 0;
	for(i = 0; i < 1000; i++) {
		printf("%c", test[i]);
	}
}

int main()
{
	int age = 12;int height = 72;
	
	printf("I am %d years old. \n", age); 
	printf("I am %d inches tall. \n", height);
	crash();
	crash();
	crash();
	crash();
	crash();
	
	return 0;
}
