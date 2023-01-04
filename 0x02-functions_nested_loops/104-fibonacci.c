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

	long int x = 1;
	long int y = x + 1;
	long int z = x + y;

	printf("%lu, ", x);
	printf("%lu, ", y);
	while (c < 99)
	{
		c++;
		printf("%lu", z);
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
