#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: int number
 * Return: If no natural square root, return -1. Else return natural
 * square root
 */

int _sqrt_recursion(int n)
{
	return (sol(n, 1));
}

/**
 * sol - solve _sqrt_recursion
 * @c: number to determine if square root
 * @i: incrementer to compare against `c`
 * Return: square root if natural square root, or -1 if none found
 */

int sol(int c, int i)
{
	int sq;

	sq = i * i;
	if (sq == c)
		return (i);
	else if (sq < c)
		return (sol(c, i + 1));
	else
		return (-1);
}
