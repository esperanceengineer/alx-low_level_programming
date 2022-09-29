#include "main.h"

/**
 * factorial - prints factorial
 * @n: number
 * Return: return the facto
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
