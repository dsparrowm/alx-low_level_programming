#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a number of char to a destination
 * @dest: destination
 * @src: source
 * @n: number of chars to copy
 *
 * Return: joined string
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
