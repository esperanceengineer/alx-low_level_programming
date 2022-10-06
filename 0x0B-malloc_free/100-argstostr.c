#include <stdlib.h>
#include <string.h>
/**
 * argstostr - entry point for app
 * @argc: count of parametres
 * @argv: array of arguments
 * Return: pointer
 */
char *argstostr(int argc, char **argv)
{
	int i = 0, n = 0, k = 0, j = 0, len;
	char *str;

	if (argc == 0 || argv == NULL)
		return (NULL);
	for (i = 0; i < argc; i++)
		n += strlen(argv[i]);
	str = malloc(sizeof(char) * n + 1);

	for (i = 0; i < argc; i++)
	{
		len  = strlen(argv[i]);
		for (j = 0; j < len; j++)
		{
			str[k] = argv[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	return (str);
}
