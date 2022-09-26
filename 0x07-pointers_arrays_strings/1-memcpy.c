#include "main.h"
#include <string.h>

/**
 * _memcpy - copies a number of byte to a src
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy
 *
 * Return: copied string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
