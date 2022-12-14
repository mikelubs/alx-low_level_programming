#include "main.h"
/**
 * print_sign - print -,+ or 0 for output number
 * @n: integer type
 * Description: print +, 0, or - and a return value
 * Return: 1 if +, 0 if 0, and -1 if -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
