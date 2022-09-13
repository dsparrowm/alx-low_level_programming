#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: to be printed
 *
 * Return: always success
 */
int print_last_digit(int n)
{
	n = n >= 0 ? n : n * -1;
	int x = n % 10;
	_putchar('0' + x);
	return (x);
}
