#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *k = haystack;
		char *b = needle;

		while (*k == *b && *b != '\0')
		{
			k++;
			b++;
		}

		if (*b == '\0')
			return (haystack);
	}

	return (0);
}
