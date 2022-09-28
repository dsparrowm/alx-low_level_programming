#include "main.h"

/**
 * factorial - prints the factorial of a given number
 * @n: number who's factorial is to be returned
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
