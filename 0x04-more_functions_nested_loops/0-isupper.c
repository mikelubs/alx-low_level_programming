#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: int type character
 * Return: 1 if uppercase and 0 if otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);

	return (0);
}
