#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int e, p, m, l, v, digit;

	e = 0;
	p = 0;
	m = 0;
	l = 0;
	v = 0;
	digit = 0;

	while (s[l] != '\0')
		l++;

	while (e < l && v == 0)
	{
		if (s[e] == '-')
			++p;

		if (s[e] >= '0' && s[e] <= '9')
		{
			digit = s[e] - '0';
			if (p % 2)
				digit = -digit;
			m = m * 10 + digit;
			v = 1;
			if (s[e + 1] < '0' || s[e + 1] > '9')
				break;
			v = 0;
		}
		e++;
	}

	if (v == 0)
		return (0);

	return (m);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int result, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	result = n1 * n2;

	printf("%d\n", result);

	return (0);
}
