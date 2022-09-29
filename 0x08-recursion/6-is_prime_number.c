#include "main.h"
/**
 *prime - check prime
 *@n: number
 *@i: divider
 *Return: always
 */
int prime(int n, int i)
{
	if (n <= 2)
	{
		if (n == 2)
			return (1);
		else
			return (0);
	}
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (prime(n, i + 1));
}

/**
 * is_prime_number - check the prime number
 * @n: number
 * Return: return prime check
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
