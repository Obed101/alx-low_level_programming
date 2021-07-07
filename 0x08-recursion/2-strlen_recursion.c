#include "holberton.h"
/**
 *_strlen_recursion - returns lenght of string
 *return: none
 *@s: string
 *return: lenght of string.
 */
int _strlen_recursion(char *s)
{
	int len;

	if (*s == 0)
		return (0);

	len = _strlen_recursion(s + 1);

	return (len + 1);
}
