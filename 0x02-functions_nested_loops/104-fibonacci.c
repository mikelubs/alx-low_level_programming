#include <stdio.h>
/**
 * main - prints the first 98 numbers of Fibonacci sequence
 * Description: Numbers must be separated by comma
 * allowed to use a standard library
 * not allowed to use `long long`
 * Return: nothing
 */
int main(void)
{
	int counter = 2;

	float x = 1;
	float y = x + 1;
	float z = x + y;

	printf("%.0f, ", x);
	printf("%.0f, ", y);
	while (counter < 98)
	{
		counter++;
		printf("%.0f", z);
		x = y;
		y = z;
		z = x + y;
		if (counter < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
