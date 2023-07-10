#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *A;
	int Z, X = 0;

	if (str == NULL)
		return (NULL);
	for (Z = 0; str[Z] != '\0'; Z++)

	A = malloc(sizeof(char) * (Z + 1));

	if (A == NULL)
		return (NULL);

	for (X = 0; str[X]; X++)
		A[X] = str[X];

	return (A);
}

