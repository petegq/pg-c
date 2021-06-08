#include <stdio.h>

int main()
{
	int age = 10;
	int height = 72;
	
	printf("I am %d years old. \n"); 
	// Remove 'age' = warning: format ‘%d’ expects a matching ‘int’ argument
	// Also > 'I am -702442952 years old' on running it.
	printf("I am %d inches tall. \n", height);
	
	return 0;
}
