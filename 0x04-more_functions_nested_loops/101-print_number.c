#include "main.h"

/**
 * print_number - print numbers
 * @n: number
 */
void print_number(int n)
{
	if (n >= 0 && n < 10)
	{
		_putchar(n + '0');
	}
	else if (n >= 10)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n < 0 && n < -10)
	{
		_putchar(n + '0');
	}
	else
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
}
