#include "main.h"

/**
 * print_rev - string in reverse
 * @s: char array string type
 * Description: only use _putchar
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (i--; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
