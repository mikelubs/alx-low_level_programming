#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * main - Entry point
 * Return: Always 1 (for Success)
 */
int main(void)
{
	int s_length = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");

	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	 s_length);
	return (1);
}
