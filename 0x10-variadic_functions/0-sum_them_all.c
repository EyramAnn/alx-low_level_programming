#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - prints the sum
 * @n: The number of paramters
 * @...: A variable number of arguments
 *
 * Return: 0 If n == 0, Otherwise the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ann;
	unsigned int ann, sum = 0;

	va_start(ann, n);

	for (ann = 0; ann < n; a++)
		sum += va_arg(ann, int);

	va_end(ann);

	return (sum);
}
