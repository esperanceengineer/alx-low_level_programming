#include "main.h"

/**
 * more_numbers - print numbers
 */
void more_numbers(void)
{
	int i;
	int j = 1;

	while (j <= 10)
	{
		for (i = 0; i <= 14; ++i)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else
			{
				_putchar(i + '0');
			}
		}
		_putchar('\n');
		j++;
	}
}
