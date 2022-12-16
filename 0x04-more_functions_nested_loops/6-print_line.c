#include "main.h"

/**
 * print_line - draw a straight line in terminal
 * @n: times _ character is printed
 * Description: use only _putchar
 */
void print_line(int n)
{
	int c; /* c will be the count */

	c = 0;
	while (c < n)
	{
		_putchar('_');

		c++;
	}
	_putchar('\n');
}
