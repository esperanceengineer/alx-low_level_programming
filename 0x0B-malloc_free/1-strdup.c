#include <stdlib.h>
#include <string.h>

/**
 * _strdup - copy th sring
 *@s: string to copy
 * Return: return the pointer
 */
char *_strdup(char *s)
{
	char *str;
	int i, n;

	if (s == NULL)
		return (NULL);
	n = strlen(s);
	str = malloc(sizeof(char) * n + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		str[i] = s[i];
	str[i] = '\0';
	return (str);
}
