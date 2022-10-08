#include <stdlib.h>

/**
 * malloc_checked - check the memory allocation
 * @n: size of alloction
 * Return: return the void pointer
 */
void *malloc_checked(unsigned int n)
{
	void *str;

	str = malloc(n);
	if (str == NULL)
		exit(98);
	return (str);
}
