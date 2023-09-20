#include "main.h"
#include <stdlib.h>
#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: string to append
 * Return: concatenated string @dest
 */
char *_strcat(char *dest, char *src)
{
    int size = 0;

    while (*dest != '\0')
    {
        /* printf("counted dest++\n"); */
        size++;
        dest++;
    }
    /* printf("size of source : %d\n", size); */
    while (*src != '\0')
    {
        /* printf("set %c to %c\n", *dest, *src); */
        *dest = *src;
        dest++;
        src++;
        size++;
    }

    *dest = '\0'; /* end the string with a null terminator */
    return (dest - size);
}
