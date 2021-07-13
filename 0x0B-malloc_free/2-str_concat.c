#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: Pointer or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *str, *nn;
	int len1, len2;
	int i, j;

	nn = "";
	if (s1 == NULL)
		s1 = nn;
	if (s2 == NULL)
		s2 = nn;
	i = len1 = len2 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	len2++;
	str = malloc((len1 + len2) * sizeof(*s1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (j <= len2)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	return (str);
}
