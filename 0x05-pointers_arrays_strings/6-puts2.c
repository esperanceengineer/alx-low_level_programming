#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 - returns the string in reverse
 * @c: pointer
 */
void puts2(char *c)
{
	int l, i;

	l = strlen(c);
	for (i = 0; i <= l; i++)
	{
		if ((c[i] != '\0') && (i % 2 == 0))
		{
			putchar(c[i]);
		}
	}
	putchar('\n');
}
