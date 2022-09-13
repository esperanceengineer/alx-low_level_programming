#include <ctype.h>

/**
 * _islower - check the lowercase
 * @c: char to check
 * Return: always return 0
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
