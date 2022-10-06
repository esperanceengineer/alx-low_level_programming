#include <stdlib.h>
#include <string.h>

/**
 *str_concat - concat th sring
 *@s1: string to concat
 *@s2: string to concat
 * Return: return the pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, n, m, k = 0;

	if (s1 == NULL)
	{
		n = 1;
	}
	else
	{
		n = strlen(s1);
	}
	if (s2 == NULL)
	{
		m = 1;
	}
	else
	{
		m = strlen(s2);
	}
	str = malloc(sizeof(char) * (n  + m + 1));
	if (str == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (i = 0; i < n; i++)
		{
			str[k] = s1[i];
			k++;
		}
	}
	if (s2 != NULL)
	{
		for (i = 0; i < m; i++)
		{
			str[k] = s2[i];
			k++;
		}
	}
	str[k] = '\0';
	return (str);
}
