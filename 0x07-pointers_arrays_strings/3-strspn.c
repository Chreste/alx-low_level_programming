#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int t, r;

	for (t = 0; s[t] != '\0'; t++)
	{
		for (r = 0; accept[r] != s[t]; r++)
		{
			if (accept[r] == '\0')
				return (t);
		}
	}
	return (t);
}
