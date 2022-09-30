#include <ctype.h>

/**
 * _isupper - check the uppercase
 * @c: char to check
 * Return: always return 0
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
