#include <string.h>

/**
 * _strspn - length of substring
 * @s: string
 * @b: string
 * Return: length
 */
unsigned int _strspn(char *s, char *b)
{
	return (strspn(s, b));
}
