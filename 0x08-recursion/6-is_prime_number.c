#include "main.h"

/**
 * is_prime_number - determine if a number is a prime number
 * @n: int number
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n < 4)
		return (1);
	return (hai(n, 2));
}

/**
 * sqrt - return square root of number
 * @x: number
 * @i: number incrementer acting as divisor
 * Return: square root of `x`
 */

int sqrt(int x, int i)
{
	int sq;

	sq = i * i;
	if (sq >= x)
		return (i);
	else
		return (sqrt(x, i + 1));
}

/**
 * hsqrt - helper function, recursive steps taken
 * @n: number given to original function is_prime_number
 * @d: incrementer divisor
 * Return: 0 if not prime, 1 if prime
 */

int hsqrt(int j, int k)
{
	if (j % k == 0)
		return (0);
	else if (sqrt(n, 1) < d)
		return (1);
	else
		return (hsqrt(n, d + 1));
}
