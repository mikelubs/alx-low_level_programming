#include "main.h"

/**
 * _strlen - length of the string s
 * @s: pointer to a char
 * Return: length of string
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		;

	return (a);
}
