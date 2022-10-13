#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - add all numbers passed as parameters
 * @n: variable number of arguments
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return (0);
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}


