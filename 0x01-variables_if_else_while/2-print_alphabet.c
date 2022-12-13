#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` function to print the alphabet in lowercase.
 * Return: 0
 */
int main(void)
{
char character = 'a';
while (character <= 'z')
{
putchar(character);
character++;
}
putchar('\n');

return (0);
}
