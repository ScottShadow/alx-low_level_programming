#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int (*p)(int, char *[]) = main;
	unsigned int i, count = 0;
	unsigned char *ptr_opcode = (unsigned char *)p;

	i = atoi(argv[1]);

	while (count < i)
	{
		printf("%02x ", *ptr_opcode++);
		count++;
	}

	printf("\n");
	return (0);
}
