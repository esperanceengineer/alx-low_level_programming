#include <stdio.h>

/**
 * times_table - prints the table
 */
void times_table(void)
{
	int i = 0, j = 0, res, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = j + 1;
			res = i * k;
			printf("%d", i * j);
			if (j != 9)
			{
				printf(",");
				if ((res / 10) >= 1)
				{
					printf(" ");
				}
				else
				{
					printf(" ");
					printf(" ");
				}
			}
		}
		printf("\n");
	}
}
