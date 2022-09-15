#include "main.h"
/**
 * print_diagonal - prints numbers
 * @n: number of times to print
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int y;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < in; i++)
		{
			for (y = 0; y <= i; y++)
			{
				_putchar(' ');
			}
			_putchar('\');
			_putchar('\n');
		}
	}
}
