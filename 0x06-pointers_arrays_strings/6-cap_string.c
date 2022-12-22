#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: string
 * Return: str
 */

char *cap_string(char *str)
{
	int i, c;
	int x;
	char p[] = ",;.!?(){}\n\t\" ";

	for (i = 0, x = 0; str[i] != '\0'; i++)
	{
		if (str[0] > 96 && str[0] < 123)
			trigger = 1;
		for (c = 0; p[c] != '\0'; c++)
		{
			if (p[c] == str[i])
				x = 1;
		}

		if (x)
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] -= 32;
				x = 0;
			}
			else if (str[i] > 64 && str[i] < 91)
				x = 0;
			else if (str[i] > 47 && str[i] < 58)
				x = 0;
		}
	}
	return (str);
}
