#include "holberton.h"
/**
 * _strlen_recursion - returns lenght
 *@s: string
 *return: integer
 */
int _strlen_recursion(char *s)
{
	int len;

	if (*s == 0)
		return(0);

	len = _strlen_recursion(s + 1);

	return (lenght + 1);
}
