#include "main.h"

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char *output = r;
	int size1 = 0, size2 = 0, rem = 0;
	int j = size_r - 1, i, k; /*counters*/

	while (n1[size1] != '\0')

		size1++;

	while (n2[size2] != '\0')

		size2++;

	i = size1 - 1;
	k = size2 - 1;
	r = r + size_r - 1;
	while (j > 0)
	{
		if (i <= 0)
			n1[i] = '0';
		if (k <= 0)
			n2[i] = '0';
		r[j] = (n1[i] - '0' + n2[k] - '0' + rem) % 10;
		rem = (n1[i] - '0' + n2[k] - '0') / 10;

		j--;
		i--;
		k--;
	}
	r[j] = (*n1 - '0' + *n2 - '0' + rem) % 10;
	return (output);
}