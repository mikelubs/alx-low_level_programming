#include "main.h"
/**
 * _abs - get absolute value of n
 * @n: int type
 * Return: absolute value of @n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
