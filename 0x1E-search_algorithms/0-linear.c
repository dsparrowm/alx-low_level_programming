#include "search_algos.h"

/**
 * linear_search - searches for a value in an array using the Linear search
 * algorithm
 *
 * @array: array as input
 * @size: size of the array
 * @value: value to search
 * Return: Always exit_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
