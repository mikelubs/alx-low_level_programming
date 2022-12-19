#include "main.h"

/**
 * puts2 - print every other charater of string
 * @str: char array string type
 * Description: Print [0], [2], ...
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
