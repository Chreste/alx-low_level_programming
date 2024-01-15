#include "search_algos.h"

/**
 * jump_search - searches for a vulue in a sorted array
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value: value to search for
 * Return: the first index of the value in the array
 */

int jump_search(int *array, size_t size, int value)
{
	size_t x, jump_step, prev_index;

	if (array == NULL || size == 0)
		return (-1);

	/* Handle invalid input */
	jump_step = sqrt(size);
	for (x = prev_index = 0; prev_index < size && array[prev_index] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", prev_index, array[prev_index]);
		x = prev_index;
		prev_index += jump_step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", x, prev_index);

	prev_index = prev_index < size - 1 ? prev_index : size - 1;
	for (; x < prev_index && array[x] < value; x++)
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	printf("Value checked array[%ld] = [%d]\n", x, array[x]);

	return (array[x] == value ? (int)x : -1);
}
