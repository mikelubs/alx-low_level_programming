#include "main.h"

/**
 * reverse_array - reverse an array of integers
 * @a: array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int i;
	int r;

	for (i = 0; i < (n / 2); i++)
	{
		r = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = r;
	}
}
