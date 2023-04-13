#include "search_algos.h"
#include <math.h>

size_t min(size_t a, size_t b);

/**
 * min - returns the min of two values
 * @a: first
 * @b: second
 *
 * Return: either a or b
 */
size_t min(size_t y, size_t z)
{
	return (y <= z ? y : z);
}

/**
 * jump_search - searches for value in a sorted array using
 * jump search algorithm
 * @array: pointer to the array
 * @size: size of array
 * @value: value to search
 *
 * Return: first index containing value
 */

int jump_search(int *array, size_t size, int value)
{
	size_t first, third, search;

	if (!array || size == 0)
		return (-1);

	search = sqrt(size);

	for (third = 0; third < size && array[third] < value;
	     first = third, third += search)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       third, array[third]);
	}

	/* causes 'found' msg even when value not in array */
	printf("Value found between indexes [%lu] and [%lu]\n", first, third);

	for (; first <= min(third, size - 1); first++)
	{
		printf("Value checked array[%lu] = [%d]\n", first, array[first]);
		if (array[first] == value)
			return (first);
	}

	return (-1);
}
