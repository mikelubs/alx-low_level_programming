#include "main.h"
/**
 * print_last_digit - output last digit of @n
 * @n: type number
 * Return: return last digit
 */
int print_last_digit(int n)
{
	int v;
	int new;

	if (n < 0)
	{
		new = -1 * n;
		v = new % 10;
		_putchar(v + '0');
		return (v);
	}
	else
	{
		v = n % 10;
		_putchar(v + '0');
		return (v);
	}
}
