#include <stdio.h>
/**
 * print_to_98 - prints all numbers to 98
 * @n: number
 */
void print_to_98(int n)
{
	if (n == 99)
	{
		printf("%d", n);
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(",");
				printf(" ");
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(",");
				printf(" ");
			}
			n--;
		}
	}
	printf("\n");
}
