#include "search_algos.h"

int binary_search(int *array, size_t size, int value);
int binary_search_helper(int *array, size_t beginning, size_t end, int value);
int binary_search(int *array, size_t size, int value)
{
    return (binary_search_helper(array, 0, size - 1, value));
}

int binary_search_helper(int *array, size_t beginning, size_t end, int value)
{
    size_t current = (beginning + end) / 2;
    size_t i = 0;
    if (array == NULL)
        return (-1);

    printf("Searching in array: ");
    for (i = beginning; i <= end; i++)
        if (i != beginning)
            printf(", %d", array[i]);
        else
            printf("%d", array[i]);
    printf("\n");
    if (array[current] == value)
        return (current);
    if (beginning == end)
        return (-1);

    if (array[current] < value)
        return (binary_search_helper(array, (current + 1), end, value));
    else if (array[current] > value)
        return (binary_search_helper(array, beginning, (current - 1), value));

    return (-1);
}
