#include <stdio.h>
/**
 * main - main block
 * Description: single base 10 digits from 0
 * not allowed to use char type variable
 * use only putchar twice
 * Return: 0
 */
int main(void)
{
	int val;

	for (val = 0; val < 10; val++)
	{
		putchar(val + '0');
	}
	putchar('\n');

	return (0);
}
