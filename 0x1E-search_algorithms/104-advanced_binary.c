#include "search_algos.h"

/**
 * advanced_binary - searches a value in a sorted array of intergers
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: -1 || value
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}

/**
 * advanced_binary_recursive - performs recursive binary search
 * @array: pointer to the first element
 * @right: starting index
 * @left: ending index
 * @value: value to search for
 * Return: -1 || index where value is located
 */

int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t x;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (x = left; x < right; x++)
		printf("%d, ", array[x]);
	printf("%d\n", array[x]);

	x = left + (right - left) / 2;
	if (array[x] == value && (x == left || array[x - 1] != value))
		return (x);
	if (array[x] >= value)
		return (advanced_binary_recursive(array, left, x, value));
	return (advanced_binary_recursive(array, x + 1, right, value));
}
