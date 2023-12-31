#include "main.h"

/**
 * _strncpy - A function that copies a string
 * @dest: pointer to destination input butter
 * @src:pointer to source input value
 * @n: types of @stc
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
