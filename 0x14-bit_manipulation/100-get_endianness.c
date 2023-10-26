#include <stdint.h>
#include "main.h"
/**
 * get_endianness - checks endianness
 * Return: 1(if its an endian)
 */
int get_endianness(void)
{

	uint32_t n = 1;
	uint8_t *bytes = (uint8_t *)&n;

	return ((*bytes == 1) ? 1 : 0);
}
