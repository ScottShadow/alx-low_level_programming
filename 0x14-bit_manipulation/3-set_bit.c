int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 1;
	while (index >= 1)
	{
		i = i << 1;
		index--;
	}
}
