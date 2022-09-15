#include <stdio.h>

/**
 * print_times_table - prints the table
 * @n: number
 */
void print_times_table(int n)
{
	int i = 0, j = 0, s;
	
	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				s = i * j;
				printf("%d", s);
				if (j != n)
				{
					printf(",");
					printf(" ");
					printf(" ");
					printf(" ");
				}
				printf("\n");
			}
		}
	}
	printf("\n");
}
