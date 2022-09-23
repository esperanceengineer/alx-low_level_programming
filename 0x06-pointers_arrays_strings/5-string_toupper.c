#include "main.h"
#include <ctype.h>

/**
 * string_toupper - uppercase string
 * @c: string
 * Return: returns the uppercase string
 */
char *string_toupper(char *c)
{
	int i = 0;
	int temp;

	while (c[i] != '\0')
	{
		temp = toupper(c[i]);
		c[i] = temp;
		i++;
	}
	return (c);
}
