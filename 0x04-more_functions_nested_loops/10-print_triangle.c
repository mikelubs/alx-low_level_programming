#include "main.h"

/**
 * print_triangle - triangle with '#'
 * @size: Size of triangle
 * Description: only use _putchar
 */
void print_triangle(int size)
{
	int p, q, r;

	p = 0;
	q = size - 1;
	while (c < size)
	{
		q = size - 1 - p;
		r = q + 1;
		while (q > 0)
		{
			_putchar(' ');
			q--;
		}
		while (r > 0)
		{
			_putchar('#');
			r--;
		}
		_putchar('\n');
		p++;
	}

	if (size <= 0)
		_putchar('\n');
}
