#include <stdio.h>
#include <stdlib.h>

int main()
{
    int apples = 12;
    int oranges = 9;
    int fruit = apples + oranges;
    printf("There are:\n");
    printf("\t%d apples.\n ", apples);
    printf("\t%d oranges.\n", oranges);
    printf("Giving a total of %d fruit in the basket.\n", fruit);

    return EXIT_SUCCESS;
}
