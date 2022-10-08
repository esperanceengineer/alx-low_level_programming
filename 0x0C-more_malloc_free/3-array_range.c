#include <stdlib.h>

/**
 * array_range - create the array of intgers
 * @min: min number
 * @max: max number
 * Return: return the pointer
 */
int *array_range(int min, int max)
{
	int *arr, i, j = 0;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(*arr) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		arr[j] = i;
		j++;
	}
	return (arr);
}
