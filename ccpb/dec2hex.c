#include <stdio.h>

int main(void)
{
    printf("===^^===\n");
    printf("Welcome to the Decimal to Hexadecimal Converter!\n");
    printf("Enter a number:\n");

    int the_number; // declares integer var

    scanf("%d", &the_number); // acquire user input

    printf("Decimal representation:		%9d\n", the_number); // %d number as decimal
    printf("Converted to hexadecimal:	%9X\n", the_number); // %x number in hexadecimal
    // + 9 or other number to use space for that many digits

    printf("===^^===\n");

    return 0;
}