#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * @s: string
 * @b: string to replace
 * @n: bytes to replace
 *
 * Return: the replaced string
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
