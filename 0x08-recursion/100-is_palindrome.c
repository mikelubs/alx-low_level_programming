#include "main.h"

/**
 * is_palindrome - check if a string is a palindrome
 * @s: char array string
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int len;

	len = get_l(s) - 1;

	return (pal_check(s, --len));
}

/**
 * get_l - gets length of string
 * @s: string
 * Return: return length of string
 */

int get_l(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (1 + get_l(++s));
}

/**
 * pal_check - recursive check of palindrome
 * @s: string
 * @l: length of string
 * Return: 1 if palindrome, 0 if not
 */

int pal_check(char *s, int l)
{
	if (*s == *(s + l))
	{
		if (l <= 0)
			return (1);
		else
			return (pal_check(++s, l - 2));
	}
	else
		return (0);
}
