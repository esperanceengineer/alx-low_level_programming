#include <string.h>
/**
 *palind - check palind
 *@s: string
 *@i: count
 *Return: always
 */
int palind(char *s, int i)
{
	if (i <= 1)
		return (1);
	if (s[0] != s[i - 1])
		return (0);
	return (palind(s + 1, i - 2));
}

/**
 * is_palindrome - check the palindrome string
 * @s: string
 * Return: return check
 */
int is_palindrome(char *s)
{
	return (palind(s, strlen(s)));
}
