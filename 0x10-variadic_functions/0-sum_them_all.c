#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - a variadic function that sums parameters
 * @n: the number of arguments in the ellipsis
 *
 * Return: num or zero
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int num = 0;
	va_list lst;

	if (n == 0)
	{
		return (0);
	}

	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		num += va_arg(lst, int);
	}
	va_end(lst);

	return (num);
}
