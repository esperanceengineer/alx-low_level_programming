#include <stdlib.h>
#include <string.h>

/**
 *alloc_grid - alloc 2d array
 *@w: width
 *@h: height
 * Return: return the pointer
 */
int **alloc_grid(int w, int h)
{
	int i, j, **arr;

	if (h <= 0 || w <= 0)
		return (NULL);
	arr = (int **)malloc(h * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < h; i++)
		arr[i] = (int *)malloc(w * sizeof(int));
	for (i = 0; i < h; i++)
		for (j = 0; j < w; j++)
			arr[i][j] = 0;
	return (arr);
}
