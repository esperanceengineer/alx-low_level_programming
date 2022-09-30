#include <string.h>

/**
 * _memset - fills the memory the constant
 * @s: string
 * @b: char to fill
 * @n: number
 * Return: the pointer to string
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
