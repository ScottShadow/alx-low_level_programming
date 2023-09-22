#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char *output = r;
	char *in1 = n1, *in2 = n2;
	int size1 = 0, size2 = 0, i, rem = 0;
	char *arr1, *arr2;

	while (*in1 != '\0')
	{
		size1++;
		in1++;
	}

	while (*in2 != '\0')
	{
		size2++;
		in2++;
	}

	arr1 = (char *)malloc(size1 * sizeof(char));
	arr2 = (char *)malloc(size2 * sizeof(char));

	if (arr1 == NULL || arr2 == NULL)
	{
		fprintf(stderr, "Memory allocation failed.\n");
		exit(1);
	}

	for (i = 0; i < size1; i++, n1++)
		arr1[i] = *n1;

	for (i = 0; i < size2; i++, n2++)
		arr2[i] = *n2;

	for (i = 0; i < (size1 / 2) && size1 != 1; i++)
	{
		char temp = arr1[i];
		arr1[i] = arr1[size1 - 1 - i];
		arr1[size1 - 1 - i] = temp;
	}

	for (i = 0; i < (size2 / 2) && size2 != 1; i++)
	{
		char temp = arr2[i];
		arr2[i] = arr2[size2 - 1 - i];
		arr2[size2 - 1 - i] = temp;
	}

	printf("switched\n");
	for (i = 0; i < size1; i++)
		printf(" %c, ", arr1[i]);
	printf("\n");
	for (i = 0; i < size2; i++)
		printf(" %c, ", arr2[i]);
	printf("\n");

	for (i = 0; i < size_r; i++)
	{
		if (i > (size2 - 1))
			arr2[i] = '0';
		if (i > (size1 - 1))
			arr1[i] = '0';
		else if ((i == (size1 - 1)) && (i == (size2 - 1)))
			break;
		r[i] = (rem + (arr1[i] - '0') + (arr2[i] - '0')) % 10 + '0';
		rem = (rem + (arr1[i] - '0') + (arr2[i] - '0')) / 10;
	}

	free(arr1);
	free(arr2);

	return (output);
}
