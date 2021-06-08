#include <stdio.h>

int main()
{
	int age;
	// Removing initial value from var = warning: ‘age’ is used uninitialized in this function
	// Also > 'I am 0 years old' on execution.
	int height = 72;
	
	printf("I am %d years old. \n", age); 
	// Remove 'age' = warning: format ‘%d’ expects a matching ‘int’ argument
	// Also > 'I am -702442952 years old' on execution.
	printf("I am %d inches tall. \n", height);
	
	return 0;
}
