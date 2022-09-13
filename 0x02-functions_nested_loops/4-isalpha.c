#include <ctype.h>

/**
 * _isalpha - check the lowercase
 * @c: char to check
 * Return: always return 0
 */
int _isalpha(int c)
{
	if (isalpha(c) == 0)
		return (0);
	else
		return (1);
}
