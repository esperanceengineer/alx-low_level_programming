/**
 * leet - convet char
 * @c: string
 * Return: returns converted char
 */
char *leet(char *c)
{
	char a[] = {'a', 'e', 'o', 't', 'l'};
	char n[] = {4, 3, 0, 7, 1};
	int i = 0;

	while (*c)
	{
		for (i = 0; i < 5; i++)
		{
			if (*c == a[i] || *c == a[i] - 32)
				*c = n[i] + '0';
		}
		c++;
	}
	return (c);
}
