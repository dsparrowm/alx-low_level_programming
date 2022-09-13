#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: to be printed
 *
 * Return: always success
 */
int print_last_digit(int n)
{
	int x;
	if (n < 0)
	{
		n *= -1;
	}
	x = n % 10;
	return (x);
}
