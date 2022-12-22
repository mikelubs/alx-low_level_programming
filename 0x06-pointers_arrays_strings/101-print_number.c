#include "main.h"

/**
  * print_number - print integer with putchar
  * @n: int to print
  *
  * Return: void
  */
void print_number(int n)
{
	unsigned int a;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	a = n;

	if (a / 10)
		print_number(a / 10);

	_putchar(a % 10 + '0');
}
