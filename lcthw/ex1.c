#include <stdio.h> // including a lib, is this the only place you can?

int main(int argc, char *argv[])
// int = integer, unsure why it apears here. main = main function / code block?
// next int >> declaring that int will be used within the function?
// char >> declaring that char will be used within the function?
// what are, and what's the diff between argv / *argv? argument something?
{
	int distance = 100; // >> declaring a var with type int
	printf("You are %d miles away. \n2\n3\n4\n5\n6th Line? ", distance); 
	// %d gets replaced with the first var after in this case distance.
	
	return 0; 	// unsure why it needs to return 0, ..
			// perhaps it has to return something so returns ..
			// success / failure codes to tell executing prog what happened?
}

