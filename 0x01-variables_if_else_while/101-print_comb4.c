#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible different combinations of 3 digits.
 * Combinations must be separated by commas and a space.
 * The 3 digits must be different.
 * 012, 120, 102, 021, 201, 210 are same combination.
 * print smallest combination of 3 digits.
 * Numbers should be printed in ascending order.
 * You can only use `putchar` 6 times.
 * Do not use any variables of type `char`.
 * Return: 0
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 1000; i++)
	{
		j = i / 100;
		k = (i / 10) % 10;
		l = i % 10;

		if (j < k && k < l)
		{
			putchar(j + '0');
			putchar(k + '0');
			putchar(l + '0');

			if (i < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
