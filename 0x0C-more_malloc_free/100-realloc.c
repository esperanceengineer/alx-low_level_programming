#include <stdlib.h>

/**
 * _realloc - realloc the memory
 * @ptr: pointer
 * @old: old size
 * @new: new size
 * Return: return the pointer
 */
void *_realloc(void *ptr, unsigned int old, unsigned int new)
{
	void *arr;
	unsigned int i = 0;

	if (ptr == NULL)
		arr = malloc(new);
	if (ptr != NULL)
	{
		if (new == 0)
			return (NULL);
		if (new == old)
			return (ptr);
		if (new > old)
		{
			arr = malloc(new);
			for (i = 0; i < old; i++)
				*((char *)arr + i) = *((char *)ptr + i);
		}
		if (new < old)
		{
			arr = malloc(new);
			for (i = 0; i < new; i++)
				*((char *)arr + i) = *((char *)ptr + i);
		}
	}
	free(ptr);
	return (arr);
}
