#include <ctype.h>

/**
 * _isdigit - check the uppercase
 * @c: char to check
 * Return: always return 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
