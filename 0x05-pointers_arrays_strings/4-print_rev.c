#include "holberton.h"
/**
 * print_rev - prints in reverse
 *
 *@in: integer variable
 *@str: string to be reversed
 *Return: Always 0.
 */
void print_rev(char *s)
{
	int in = 0;

	while (*(str + in))
	{
		_putchar(*(str + in));
		in++;
	}
	_putchar('\n');
}
