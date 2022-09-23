#include "main.h"
#include <ctype.h>

/**
 * cap_string - capitalize string
 * @c: string
 * Return: returns the uppercase string
 */
char *cap_string(char *c)
{
	int i = 0;
	int temp;

	while (c[i] != '\0')
	{
		if (c[i] == ' ' || c[i] == '\t' || c[i] == '\n' || c[i] == '}')
		{
			++i;
			temp = toupper(c[i]);
			c[i] = temp;
			continue;
		}
		else if (c[i] == ',' || c[i] == ';' || c[i] == '.')
		{
			++i;
			temp = toupper(c[i]);
			c[i] = temp;
			continue;
		}
		else if (c[i] == '!' || c[i] == '?' || c[i] == '"')
		{
			++i;
			temp = toupper(c[i]);
			c[i] = temp;
			continue;
		}
		else if (c[i] == '{' || c[i] == '(' || c[i] == ')')
		{
			++i;
			temp = toupper(c[i]);
			c[i] = temp;
			continue;
		}
		i++;
	}
	return (c);
}
