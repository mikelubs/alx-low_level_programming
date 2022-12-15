#include "main.h"
/**
 * _abs - get absolute value of n
 * @int: int type
 * Return: absolute value of @n
 */
int _abs(int)
{
	int n;

	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
