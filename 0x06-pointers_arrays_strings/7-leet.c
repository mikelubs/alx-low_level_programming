#include "main.h"

/**
  * leet - Encodes a string into 1337
  * @s: string to encode
  * Return: encoded s
  */
char *leet(char *s)
{
	int a = 0, b = 0, len = 5;
	char ch[5] = {'A', 'E', 'O', 'T', 'L'};
	char en[5] = {'4', '3', '0', '7', '1'};

	while (s[a])
	{
		b = 0;

		while (b < len)
		{
			if (s[a] == ch[b] || s[a] - 32 == ch[b])
			{
				s[a] = en[b];
			}

			b++;
		}

		a++;
	}

	return (s);
}
