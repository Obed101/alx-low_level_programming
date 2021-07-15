#include "holberton.h"
#include <string.h>
#include <stdlib.h>

/**
 * *string_nconcat - a function that combines two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes to add
 *
 * Return: NULL or pointer to reallocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len, count;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = _strlen(s2);

	if (n >= len)
		ptr = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	else
		ptr = malloc(sizeof(char) * (_strlen(s1) + n + 1));
	if (ptr == NULL)
		return (NULL);

	count = 0;
	while (s1[count] != '\0')
	{
		ptr[count] = s1[count];
		count++;
	}
	i = 0;
	while (s2[i] != '\0' && i < n)
	{
		ptr[count] = s2[i];
		count++;
		i++;
	}
	ptr[count] = '\0';
	return (ptr);
}

/**
 * _strlen - Returns the length of a string
 * @s: The given string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int combb;

	for (combb = 0; s[combb] != '\0'; combb++);

	return (combb);
}
