#include <string.h>

/**
 * _strpbrk - search for any byte in a string
 * @s: string
 * @b: char to search
 * Return: the pointer to string
 */
char *_strpbrk(char *s, char *b)
{
	return (strpbrk(s, b));
}
