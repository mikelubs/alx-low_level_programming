#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - smallest number of coins to make an amount of change
 * @argc: Arg count
 * @argv: all arguments
 *
 * Return: 1 on error, 0 for success
 */
int main(int argc, char *argv[])
{	int cts, cns = 0;

	if (argc == 2)
	{
		cts = atoi(*(argv + 1));
		while (cts > 0)
		{
			if (cts % 25 < cts)
			{
				cts -= 25;
				cns++;
			}
			else if (cts % 10 < cts)
			{
				cts -= 10;
				cns++;
			}
			else if (cts % 5 < cts)
			{
				cts -= 5;
				cns++;
			}
			else if (cts % 2 < cts)
			{
				cts -= 2;
				cns++;
			}
			else if (cts % 1 < cts)
			{
				cts -= 1;
				cns++;
			}
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", cns);
	return (0);
}
