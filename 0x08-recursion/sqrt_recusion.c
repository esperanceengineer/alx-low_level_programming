#include "main.h"
/**
 *racine - returns the square
 *@low: the first element
 *@high: the last element
 *@n: the number
 *Return: return the square
 */
int racine(int low, int high, int n)
{
	int mid = (low + high) / 2;

	if ((mid * mid <= n) && (n % mid != 0))
		return (-1);
	else if ((mid * mid <= n) && ((mid + 1) * (mid + 1) > n))
		return (mid);
	else if (mid * mid < n)
		return (racine(mid + 1, high, n));
	else
		return (racine(low, mid - 1, n));
}
/**
 * _sqrt_recursion - returns pow
 * @n: number
 * Return: return the root square
 */
int _sqrt_recursion(int n)
{
	return (racine(0, n, n));
}
