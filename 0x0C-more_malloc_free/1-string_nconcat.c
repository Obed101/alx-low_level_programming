#include "holberton.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - a function that combines two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the numbeer of bytes to add
 *
 * Return: NULL or pointer to reallocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con;
	int i;
	unsigned int u;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	con = malloc(sizeof(char) * (i + n + 1));
	if (con == NULL)
		return (NULL);
	i = u = 0;
	while (s1[i] != '\0')
	{
		con[i] = s1[i];
		i++;
	}
	while (u < n && s2[u] != '\0')
	{
		con[i] = s2[u];
		i++, u++;
	}
	con[i] = '\0';
	return (con);
}
