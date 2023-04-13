#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array
 * using interpolation search algorithm
 * @array: pointer to array
 * @size: size of array
 * @value: value to search
 *
 * Return: first index containing value
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t first = 0;
	size_t third = size - 1;
	size_t sec;

	if (!array)
		return (-1);

	while ((array[third] != array[first]) &&
	       (value >= array[first]) && (value <= array[third]))
	{
		sec = first + (((double)(third - first) / (array[third] - array[first]))
			    * (value - array[first]));
		printf("Value checked array[%lu] = [%d]\n", sec, array[sec]);
		if (array[sec] < value)
			first = sec + 1;
		else if (value < array[sec])
			third = sec - 1;
		else
			return (sec);
	}
	if (value == array[first])
	{
		printf("Value checked array[%lu] = [%d]\n", first, array[first]);
		return (first);
	}
	sec = first + (((double)(third - first) / (array[third] - array[first]))
		     * (value - array[first]));
	printf("Value checked array[%lu] is out of range\n", sec);
	return (-1);
}
