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
	int c = 2;

	int x = 1;
	int y = x + 1;
	int z = x + y;

	printf("%i, ", x);
	printf("%i, ", y);
	while (c < 98)
	{
		c++;
		printf("%i", z);
		x = y;
		y = z;
		z = x + y;
		if (c < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
