#include <stdio.h>
/**
 * main - main blocks
 * Description: Print all numbers of base 10, starting from 0.
 * Return: 0
 */
int main(void)
{
	int val;

	for (val = 0; val < 10; val++)
	{
		printf("%i", val);
	}
	putchar('\n');

	return (0);
}
