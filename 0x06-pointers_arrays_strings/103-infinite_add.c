#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two sting of numbers and returns their sum
 * @n1: string 1
 * @n2: string 2
 * @r: the result string
 * @size_r: the size of the buffer
 * Return: sum of two
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char *output = r;
	char *in1 = n1, *in2 = n2;
	int size1 = 0, size2 = 0, i, rem = 0;

	while (*in1 != '\0')
	{
		size1++;
		*in1++;
	}

	while (*in2 != '\0')
	{
		size2++;
		*in2++;
	}

	char arr1[size1];
	char arr2[size2];

	for (i = 0; i < size1; i++, n1++)
		arr1[i] = *n1;

	for (i = 0; i < size2; i++, n2++)
		arr2[i] = *n2;

	for (i = 0; i < (size1 / 2) && size1 != 1; i++)
	{
		char temp = arr1[i];
		arr1[i] = arr1[size1 - 1 - i];
		arr1[size1 - i] = temp;
	}

	for (i = 0; i < (size2 / 2) && size2 != 1; i++)
	{
		char temp = arr2[i];
		arr2[i] = arr2[size2 - 1 - i];
		arr2[size2 - i] = temp;
	}

	printf("switched\n");
	for (i = 0; i <= size1; i++)
		printf(" %c, ", arr1[i]);
	printf("\n");
	for (i = 0; i <= size2; i++)
		printf(" %c, ", arr2[i]);
	printf("\n");

	for (i = 0; i <= size_r; i++)
	{
		if (i > (size2 - 1))
			arr2[i] = '0';
		if (i > (size1 - 1))
			arr1[i] = '0';
		else if ((i == (size1 - 1)) && (i == (size2 - 1)))
			break;
		r[i] = (rem + (arr1[i] - 48) + (arr2[i] - 48)) % 10;
		r[i] += 48;
		rem = (rem + (arr1[i] - 48) + (arr2[i] - 48)) / 10;
	}
	return (output);
}