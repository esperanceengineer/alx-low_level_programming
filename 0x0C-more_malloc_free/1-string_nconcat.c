#include <stdlib.h>
#include <string.h>

/**
 *string_nconcat - concat th sring
 *@s1: string to concat
 *@s2: string to concat
 *@len: number of char
 * Return: return the pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int len)
{
	char *str;
	unsigned int i, n, m, k = 0, count;

	n = (s1 == NULL) ? 1 : strlen(s1);
	m = (s2 == NULL) ? 1 : strlen(s2);
	str = (char *)malloc(sizeof(char) * (n  + m + 1));
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
		count = (len >= m) ? m : len;
		for (i = 0; i < count; i++)
		{
			str[k] = s2[i];
			k++;
		}
	}
	str[k] = '\0';
	return (str);
}
