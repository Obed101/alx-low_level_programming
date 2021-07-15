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
	char *sup;
	int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	sup = malloc(sizeof(char) * (i + n + 1));
	if (sup == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		sup[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		sup[i] = s2[j];
		i++, j++;
	}
	sup[i] = '\0';
	return (sup);
}
