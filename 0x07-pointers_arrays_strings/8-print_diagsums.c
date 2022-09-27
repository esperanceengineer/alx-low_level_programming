#include <stdio.h>

/**
 * print_diagsums - sum of diagonals
 * @a: array of pointer
 * @n: lenght of array
 */
void print_diagsums(int *a, int n)
{
	int i, j, sumRight = 0, sumLeft = 0;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
				sumRight += *((a + i * n) + j);
		}
		sumLeft  += *((a + i * n) + (n - i -1));
	}
	printf("%d", sumRight);
	printf(", ");
	printf("%d\n", sumLeft);
}
