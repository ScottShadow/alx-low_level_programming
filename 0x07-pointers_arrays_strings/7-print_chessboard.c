#include "main.h"
/**
 * print_chessboard - prints an 8x8 chess board
 * @a: the pointer to the chess board
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, j, count;

	count = 8;
	for (i = 0; i < count; i++)
	{
		for (j = 0; j < count; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
