#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int x, z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0'; x++)
	for (z = 0; s2[z] != '\0'; z++)
	p = malloc(sizeof(char) * (x + z + 1));

	if (p == NULL)
		return (NULL);
	x = z = 0;
	while (s1[x] != '\0')
	{
		p[x] = s1[x];
		x++;
	}

	while (s2[z] != '\0')
	{
		p[x] = s2[z];
		x++, z++;
	}
	p[x] = '\0';
	return (p);
}
