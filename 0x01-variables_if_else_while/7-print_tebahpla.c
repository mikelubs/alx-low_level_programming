#include <stdio.h>
/**
 * main - main block
 * Description: Print the alphabet in reverse order in lowercase.
 * Return: 0
 */
int main(void)
{
	char character;

	for (character = 'z'; character >= 'a'; character--)
	{
		putchar(character);
	}
	putchar('\n');

	return (0);
}
