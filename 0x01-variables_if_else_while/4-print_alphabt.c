#include <stdio.h>
/**
 * main - main block
 * Description: print all letters but the letter 'q' and 'e'.
 * Return: 0
 */
int main(void)
{
	char character = 'a';

	while (character <= 'z')
	{
		if (character != 'q' && character != 'e')
			putchar(character);
		character++;
	}
	putchar('\n');

	return (0);
}
