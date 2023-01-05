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
	return (hsqrt(n, 2));
}

/**
 * sqrt - return square root of number
 * @x: number
 * @i: number incrementer acting as divisor
 * Return: square root of `x`
 */

int sq_rt(int x, int i)
{
	int sq;

	sq = i * i;
	if (sq >= x)
		return (i);
	else
		return (sq_rt(x, i + 1));
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
	else if (sq_rt(j, 1) < k)
		return (1);
	else
		return (hsqrt(j, k + 1));
}
