#include "main.h"

/**
 * _pow_recursion - returns pow
 * @n: number
 * @m: number
 * Return: return the pow
 */
int _pow_recursion(int n, int m)
{
	if (m < 0)
		return (-1);
	if (m == 0)
		return (1);
	if (n == 0)
		return (0);
	return (n * _pow_recursion(n, m - 1));
}
