#include "holberton.h"
#include <stddef.h>
/**
* _strchr - locates a character in a string
* @s: the string variable
* @c: the character to look for
*
* Return: a pointer to a char
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		return (&s[i]);
	}
	return (0);/*returns a char type*/
}
