#include "search_algos.h"

int binary_search_helper(int *array, int value,
			 size_t first, size_t last);
size_t min(size_t y, size_t z);

/**
 * min - returns the minimum of two values
 * @y: first
 * @z: second
 *
 * Return: `y` if lower or equal to `z`, `z` otherwise
 */
size_t min(size_t y, size_t z)
{
	return (y <= z ? y : z);
}

/**
 * binary_search_helper - searches for a value in an integer array
 * @array: pointer to array
 * @value: value to search
 * @first: starting index
 * @last: ending index
 *
 * Return: index containing `value`
 */

int binary_search_helper(int *array, int value,
			 size_t first, size_t last)
{
	size_t sec, i;

	if (!array)
		return (-1);

	while (first <= last)
	{
		sec = (first + last) / 2;
		printf("Searching in array: ");
		for (i = first; i <= last; i++)
			printf("%i%s", array[i], i == last ? "\n" : ", ");
		if (array[sec] < value)
			first = sec + 1;
		else if (array[sec] > value)
			last = sec - 1;
		else
			return ((int)sec);
	}

	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array
 * using an exponential search algorithm
 * @array: pointer to array
 * @size: size of array
 * @value: value to search
 *
 * Return: first index
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t first, last, bound = 1;

	if (!array || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       bound, array[bound]);
		bound *= 2;
	}

	first = bound / 2;
	last = min(bound, size - 1);
	/* generate 'found' message */
	printf("Value found between indexes [%lu] and [%lu]\n", first, last);
	return (binary_search_helper(array, value, first, last));
}
