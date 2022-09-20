#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts_half - returns the string in reverse
 * @c: pointer
 */
void puts_half(char *c)
{
	int l, i, n;

	l = strlen(c);
	if (l % 2 != 0)
		n = (l - 1) / 2;
	else
		n = l / 2;
	for (i = n; i <= l; i++)
	{
		if (c[i] != '\0')
		{
			putchar(c[i]);
		}
	}
	putchar('\n');
}
