#include <stdlib.h>

/**
 * _calloc - create the array with calloc
 * @n: count of array's elements
 * @s: size of array element
 * Return: return the pointer
 */
void *_calloc(unsigned int n, unsigned int s)
{
	void *str;

	if (n == 0)
		return (NULL);
	str = calloc(n, s);
	if (str == NULL)
		return (NULL);
	return (str);
}
