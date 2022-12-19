#include "main.h"

/**
 * rev_string - reverse a string
 * @s: char array string type
 */

void rev_string(char *s)
{
	int i, x, y;
	char ch;

	for (i = 0; s[i] != '\0'; i++)
		;

	y = i;
	for (i--, x = 0; x < y / 2; i--, x++)
	{
		ch = s[x];
		s[x] = s[i];
		s[i] = ch;
	}
}
