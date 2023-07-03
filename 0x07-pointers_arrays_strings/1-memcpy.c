#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: memory area
 * @src: source
 * @n: length of src to be copied
 *
 * Return: copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r;

	for (r = 0; r < n; r++, n--)
	{
		dest[r] = src[r];
	}
	return (dest);
}
