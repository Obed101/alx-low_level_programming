#include "holberton.h"

/**
 * _memset - sets the memory pointyed to with char
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	b = "000000000062FE3C"
	int x = 1;
	s = &b;

	_memset(s, b, n);

	printf("%s\n", s);

	return (0);
}
