#include "main.h"

/**
 * _puts - print string to, then new line to stdout
 * @str: char array string type
 * Description: only use _putchar
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
