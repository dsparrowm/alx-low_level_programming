#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - primts natural number
 * @n: number to print
 *
 * Return: success
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
			if (n == 98)
			{
				printf("%d\n", n);
			}
		}
	}
	else if (n == 98)
	{
		printf("%d\n", n);
		return (0);
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		if (n == 98)
		{
			printf("%d\n", n);
		}
	}
}
