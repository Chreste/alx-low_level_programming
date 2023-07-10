#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int x, m, v = 0, t = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (m = 0; av[x][m]; m++)
			t++;
	}
	t += ac;

	str = malloc(sizeof(char) * t + 1);
	if (str == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
	for (m = 0; av[x][m]; m++)
	{
		str[v] = av[x][m];
		v++;
	}
	if (str[v] == '\0')
	{
		str[v++] = '\n';
	}
	}
	return (str);
}
