#include "search_algos.h"

int binary_search_recursion(int *array, int value,
			    size_t low, size_t high);

/**
 * binary_search_recursion - helper to `advanced_binary`, recursively searches
 * for a value in an integer array
 * @array: pointer to first element of array to seach
 * @value: value to search for
 * @first: starting index in array
 * @last: ending index in array
 *
 * Return: index containing `value`
 */
int binary_search_recursion(int *array, int value,
			    size_t first, size_t last)
{
	size_t sec, i;

	if (!array)
		return (-1);

	sec = (first + last) / 2;
	printf("Searching in array: ");
	for (i = first; i <= last; i++)
		printf("%i%s", array[i], i == last ? "\n" : ", ");

	if (array[first] == value)
		return ((int)first);

	if (array[first] != array[last])
	{
		if (array[sec] < value)
			return (binary_search_recursion(array, value,
							sec + 1, last));
		if (array[sec] >= value)
			return (binary_search_recursion(array, value,
							first, sec));
	}

	return (-1);
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using a binary search algorithm
 * @array: pointer to array
 * @size: size of array
 * @value: value to search
 *
 * Return: first index containing value
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t first = 0;
	size_t last = size - 1;

	if (!array)
		return (-1);

	return (binary_search_recursion(array, value, first, last));
}
