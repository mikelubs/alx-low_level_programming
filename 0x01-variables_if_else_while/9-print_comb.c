#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations fo single-digit numbers.
 * Numbers must be separated by commas and a space.
 * You can only use `putchar` 4 times not `char` type variables
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		num++;
	}
	putchar('\n');

	return (0);
}
