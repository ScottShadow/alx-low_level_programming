#include "main.h"

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char *output = r;
	int size1 = 0, size2 = 0, sum, rem = 0;
	int j = size_r; /*counters*/

	while (*n1 != '\0')
	{
		size1++;
		n1++;
	}
	while (*n2 != '\0')
	{
		size2++;
		n2++;
	}
	r = r + size_r - 1;
	while (j >= 0)
	{
		if (size1 < 0)
			*n1 = '0';
		if (size2 < 0)
			*n2 = '0';
		sum = *n1 - '0' + *n2 - '0' + rem;
		if (sum > 9)
			rem = sum / 10;
		else
			rem = 0;
		*r = sum % 10;

		j--;
		r--;
		n1--;
		n2--;
		size1--;
		size2--;
		n1--;
		n2--;
	}
	return (output);
}