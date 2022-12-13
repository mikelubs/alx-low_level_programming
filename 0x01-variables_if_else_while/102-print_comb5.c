#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations of two two-digit numbers.
 * Numbers should range from 0 to 99.
 * The two numbers should be separated by a space.
 * All numbers should be printed with two digits. 1 should be printed as 01.
 * Combinations must be separated by a comma followed by a space.
 * Combinations should be printed in ascending order.
 * `00 01` and `01 00` are same combination.
 * You can only use `putchar` max 8 times
 * Do not use any variable of type `char`.
 * Return: 0
 */
int main(void)
{
	int i, j;
	int w, x, y, z;

	for (i = 0; i < 100; i++)
	{
		w = i / 10;
		x = i % 10;

		for (j = 0; j < 100; j++)
		{
			y = j / 10;
			z = j % 10;

			if (w < y || (w == y && x < z))
			{
				putchar(w + '0');
				putchar(x + '0');
				putchar(32);
				putchar(y + '0');
				putchar(z + '0');

				if (!(w == 9 && x == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);

	return (0);
}
