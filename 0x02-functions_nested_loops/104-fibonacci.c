#include <stdio.h>
/**
 * main - prints the first 98 numbers of Fibonacci sequence
 * Description: Numbers must be separated by comma
 * allowed to use a standard library
 * not allowed to use `long long`
 * Return: 0
 */

int main(void)
{
	int i;
	long a = 1, b = 2, c;

	printf("%ld, %ld\n", a, b);
	for (i = 0; i < 96; i++)
	{
		c = a + b;
		printf("%ld\n", c);
		a = b;
		b = c;
	}
	return (0);
}

