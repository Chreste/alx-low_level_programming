#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; ++l)
	{
		if (l % 2 == 0)
			_putchar(str[l]);
	}
	_putchar('\n');
}
