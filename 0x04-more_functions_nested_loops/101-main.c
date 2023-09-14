#include "main.h"
#include <stdio.h>

int main(void)
{
    int numbers[] = {
        -0210,
        0,
        1,
        -1,
        42,
        -42,
        123,
        -123,
        100030,
        1000,
        -1000,
        987654321,
        -987654321,
    };
    int size = sizeof(numbers);
    int size2 = sizeof(numbers[0]);
    int i;

    for (i = 0; i < size / size2; i++)
    {
        printf("Printing number: %d\n", numbers[i]);
        print_number(numbers[i]);
        putchar('\n');
        /* print_number(1263838776828252); */
    }

    return (0);
}
