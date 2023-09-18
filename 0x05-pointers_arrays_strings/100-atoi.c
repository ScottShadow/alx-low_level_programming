#include "main.h"

int _atoi(char *s)
{
	char *temp;
	int size = 0, isNeg = 1;
	unsigned num = 0, count = 0;

	temp = s;

	while (*temp != '\0') /* loop through */
	{
		if (*temp == '-') /* change sign with each '-' flag */
			isNeg *= -1;

		if (*temp >= 48 && *temp <= 57) /* if its a number save it to num*/
		{
			if (count > 0)
				num = num * 10;
			num = num + (*temp - 48);
			count++;
		}
		else if (count > 0 && !(*temp >= 48 && *temp <= 57))
			break;
		size++;
		temp++;
	}
	return (isNeg * num);
}
