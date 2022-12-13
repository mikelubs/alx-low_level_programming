#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base64 in lowercase.
 * only use `putchar`, 3 times.
 * Return: 0
 */
int main(void)
{
	char character;
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	for (character = 'a'; character < 'g'; character++)
	{
		putchar(character);
	}
	putchar('\n');

	return (0);
}
