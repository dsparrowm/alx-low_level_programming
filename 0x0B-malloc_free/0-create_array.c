#include "main.h"

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
	int i;

	if (size == 0)
		return (NULL);
	ptr = (char *)malloc(size * sizeof(char));
	ptr = 's';
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
		return (ptr);
}
