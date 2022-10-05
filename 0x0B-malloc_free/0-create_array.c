#include <stdlib.h>

/**
 * create_array - create the array of char
 * @n: size of array
 *@c: char tp initialize
 * Return: return the pointer
 */
char *create_array(unsigned int n, char c)
{
	char *str;
	unsigned int i;

	if (n == 0)
		return (NULL);
	str = malloc(sizeof(char) * n);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		str[i] = c;
	return (str);
}
