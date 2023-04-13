#include "search_algos.h"

/**
 * binary_search - searches for a value in an array using binary
 * search algorithm
 * @array: pointer to array
 * @size: size of array
 * @value: value to search in the array
 *
 * Return: index containing value
 */

int binary_search(int *array, size_t size, int value)
{
	int first, second, third;
	int i;

	if (array == NULL)
	{
		return (-1);
	}

	first = 0;
	third = size - 1;

	while (first <= third)
	{
		second = (first + third) / 2;

		printf("Searching in array: ");
		for (i = first; i <= third; i++)
			printf("%i%s", array[i], i == third ? "\n" : ", ");

		if (array[second] < value)
			first = second + 1;
		else if (array[second] > value)
			third = second - 1;
		else
			return (second);
	}

	return (-1);
}
