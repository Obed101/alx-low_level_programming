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
	unsigned int b;
	va_list lst;

	va_start(lst, n);
	for(i = 0; i < b; i++)
	{
		b = va_arg(lst, const unsigned int);
		num += b;
	}
	va_end(lst);

	if(n == 0)
	{
		return (0);
	}

	return (num);
}
