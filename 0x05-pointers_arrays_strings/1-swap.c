#include "main.h"

/**
 * swap_int - swap values of 2 ntegers
 * @a: pointer to an int
 * @b: pointer to an int
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
