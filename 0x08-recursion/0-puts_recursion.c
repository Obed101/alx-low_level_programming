#include "holberton.h"
/**
 *_puts_recursion - prints a string in recursion
 *
 *@s - string
 *
 *
 *return - void
 */
void _puts_recursion(char *s)

{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');

}
