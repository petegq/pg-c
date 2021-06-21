#include <stdio.h>
#include <stdlib.h>

int main()
{
    // int number = 100000000000000;    // = warning: implicit conversion from 'long' to 'int' changes value from 100000000000000 to 276447232 [-Wconstant-conversion]
    long number = 100000000000000;

    // printf("%d \n", number);     // int num... printf("%d", number) for 276447232
    printf("%ld \n", number); // long num... printf("%ld... for expected output of 100000000000000
        // %d = decimal
        // %ld = long decimal

    printf("Hello world! \n");

    return EXIT_SUCCESS;
}