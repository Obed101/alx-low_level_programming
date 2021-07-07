#include "holberton.h"
/**
 * _print_rec_recursion - prints reverse recursion
 *
 *@s: string to be reversed
 *
 *return: always success
 */
void _print_rev_recursion(char *s)
{
	if (!*s)

		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
