#include "main.h"
#include <stdio.h>

/**
 * print_array - print n number of array
 * @a: array to be queried
 * @n: number of elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i <= n; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
}
