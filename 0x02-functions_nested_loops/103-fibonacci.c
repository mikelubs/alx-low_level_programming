#include <stdio.h>

/**
 * main - block with main function
 * Description: sum of even Fibonacci numbers < 4,000,000
 * Return: 0
 */
int main(void)
{
	int i = 1, a = 2, sum = 0;
	int k;

	while (a < 4000000)
	{
		if (a % 2 == 0)
			sum += a;

		k = a;
		a += i;
		i = k;
	}
	printf("%d\n", sum);
	return (0);
}
