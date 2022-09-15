#include "main.h"
/**
 * more_numbers - print more numbers
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int y;

		for (y = '0'; i < 14; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
	_putchar('\n');
}

