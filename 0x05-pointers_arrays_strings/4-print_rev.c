#include "holberton.h"
/**
 * print_rev - prints in reverse
 *
 *@s: integer variable
 *@str: string to be reversed
 *Return: Always 0.
 */
void print_rev(char *s)
{
	int in = 0;

	while (*(str + in))
	{
		print_rev(*(s));
		in++;
	}
	_putchar('\n');
}
