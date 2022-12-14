#include "main.h"
/**
 * main - main function block
 * Description : Print `_putchar` then a new line
 * Return: 0
 */
int main(void)
{
	char putchar[] = "_putchar";
	int i = 0;

	while (putchar[i] != '\0')
	{
		_putchar(putchar[i]);
		i++;
	}
	_putchar("\n");
	return (0);
}
