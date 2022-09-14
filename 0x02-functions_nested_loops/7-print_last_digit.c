#include "main.h"

/**
 * print_last_digit - print the last digit
 * @n: number
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	if (n  < 0)
	{
		n =  -n;
	}
	n = n % 10;
	_putchar(n + '0');
	return (n);
}
