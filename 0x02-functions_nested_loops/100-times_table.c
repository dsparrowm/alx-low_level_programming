#include <stdio.h>
#include "main.h"
/**
 * print_times_table - prints times table
 * @n: worked on
 *
 * Return: success
 */
void print_times_table(int n)
{
	int x;
	int y;

	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= x; y++)
		{
			printf("%d, ", y * x);
		}	
		printf("\n");
	}
