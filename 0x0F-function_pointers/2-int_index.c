#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: array to be searched
 * @size: size of the array
 * @cmp: the pointer to the function passed
 *
 * Return: an int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	else
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
