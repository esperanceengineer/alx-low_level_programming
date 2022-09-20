#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_array - prints array
 * @a: array
 * @n: number
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != 4)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
