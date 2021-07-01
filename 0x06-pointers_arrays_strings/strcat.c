#include "holberton.h"
/**
 *_strlen - counts the lenght of string
 *
 *@s: string variable
 *Return: not zero (lenght)
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
/**
 * *_strcat - concartenares strings.
 *
 * @s2[]: a variable
 * @s1[98]: another variable to be appended
 */
char *_strcat(char *dest, char *src)
{
	dest = strlen(s1[98]);
	src = s2[];

	while (*src != '\0')
	{
		_strcat (dest, src);
	}
	*dest = '\0';
	return (dest);
}
