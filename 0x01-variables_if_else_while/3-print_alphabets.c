#include <stdio.h>
/**
 * main - main block
 * Description: `putchar` three times print lowercase, uppercase alphabet.
 * Return: 0
 */
int main(void)
{
	char character = 'a';

	while (character <= 'z')
	{
		putchar(character);
		character++;
	}

	character = 'A';

	while (character <= 'Z')
	{
		putchar(character);
		character++;
	}

	putchar('\n');

	return (0);
}
