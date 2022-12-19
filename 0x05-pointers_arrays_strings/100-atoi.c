#include "main.h"

/**
 * _atoi - string conversion to integer.
 * @s: array string char
 * Description:
 * You need to take into account all -/+ signs before the number.
 * return 0. if no numbers are in string
 * do not hard code any special values
 * Return: first integer found in string
 */

int _atoi(char *s)
{
	int i;
	int x, y;

	x = 0;
	y = -1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			y *= -1;

		if (s[i] > 47 && s[i] < 58)
		{
			if (x < 0)
				x = (x * 10) - (s[i] - '0');
			else
				x = (s[i] - '0') * -1;

			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
	}
	if (y < 0)
		x *= -1;

	return (x);
}
