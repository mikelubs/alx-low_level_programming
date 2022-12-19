#include "main.h"

/**
 * puts_half - print half of a string
 * @str: char array string type
 * Description: print last n characters if length is odd
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
