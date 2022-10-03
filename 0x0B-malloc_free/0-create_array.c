#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - creates array and initialize with a specific char
 * @size: size of the memory
 * @c: character to be initialized
 *
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
