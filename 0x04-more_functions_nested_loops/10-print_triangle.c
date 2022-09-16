#include "main.h"

/**
 * print_triangle - print numbers
 * @n: count
 */
void print_triangle(int n)
{
	int i;
	int j;
	int k;

	if (n > 0)
	{
		for (i = 0; i < n; ++i)
		{
			for (j = 1; j < n - i; j++)
			{
				_putchar(' ');
			}
			for (k = 0; k < i + 1; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
