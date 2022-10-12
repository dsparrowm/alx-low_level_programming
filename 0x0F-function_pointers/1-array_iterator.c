#include "function_pointers.h"

/**
 * array_iterator - iterates through an array
 * @array: the array to iterate through
 * @size: size of the array
 * @action: pointer to the function passed
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
