#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * using two input parameters
 *
 * @a: intput parameter 1.
 * @b: intput paramater 2.
 *
 * Return: Nothing.
 */

void swap_int(int *a, int *b)
{
	int te;

	te = *a;
	*a = *b;
	*b = te;
}
