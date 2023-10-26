int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 1 << index;
	unsigned long int t = (*n) >> index;

	if ((t & 1) == 1)
		*n = (*n) & (~i);

	return (1);
}