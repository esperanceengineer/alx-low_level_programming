#include <string.h>
#include <stdio.h>

/**
 * set_string - set the value of pointer to char
 * @s: string
 * @b: char to search
 */
void set_string(char **s, char *b)
{
	while (**s != '\0')
	{
		printf("%c", **s);
		s++;
	}
}
