#include "main.h"

/**
 * swap_int - swaps two integers using pointers
 * @a: first integer
 * @b: srcond integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
