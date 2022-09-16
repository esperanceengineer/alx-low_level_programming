#include "main.h"

/**
 * print_square - print numbers
 * @n: count
 */
void square(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; ++i)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
