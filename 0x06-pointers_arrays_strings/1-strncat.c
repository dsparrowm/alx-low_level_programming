#include "main.h"
#include <string.h>

/**
 * _strncat - joins n number of chars to a source string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of strings to join
 *
 * Return: the joined string
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}

