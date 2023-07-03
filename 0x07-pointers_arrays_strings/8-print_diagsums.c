#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int su1, su2, y;

	su1 = 0;
	su2 = 0;

	for (y = 0; y < size; y++)
	{
		su1 += a[y];
		su2 += a[size - y - 1];
		a += size;
	}

	printf("%d, %d\n", su1, su2);
}
