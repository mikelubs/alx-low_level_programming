#include <stdio.h>

/**
 * main - block of function main
 * Description: first 50 fibonacci numbers, comma separated.
 * starts at 1 and 2
 * Return: 0
 */
int main(void)
{
	int count = 2;
	int i = 1, j = 2;
	int k;

	printf("%i, ", i);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%i\n", j);
		}
		else
		{
			printf("%i, ", j);
		}

		k = j;
		j += i;
		i = k;
		count++;
	}

	return (0);
}
