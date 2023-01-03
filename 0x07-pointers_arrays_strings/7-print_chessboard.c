#include "main.h"

/**
 * print_chessboard - print the chessboard, 2d array
 * @a: 2d array of chars
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	j = 0;
	while (j < 8)
	{
		i = 0;
		while (i < 8)
		{
			_putchar(a[j][i]);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
