#include "main.h"

/**
 * print_most_numbers - primt a set of numbers
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
