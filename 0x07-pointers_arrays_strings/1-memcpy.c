#include <string.h>

/**
 * _memcpy - copy the memory area
 * @s: string
 * @b: char to fill
 * @n: number
 * Return: the pointer to string
 */
char *_memcpy(char *s, char *b, unsigned int n)
{
	memcpy(s, b, n);
	return (s);
}
