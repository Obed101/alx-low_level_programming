#include <stdlib.h>

/**
 * _strdup - Return pointer to a string that has been duplicated
 * @str: String to duplicate
 *
 * Return: Pointer or NULL
 */
char *_strdup(char *str)
{
	char *u;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);
	i = len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len++;
	u = malloc(len * sizeof(*str));
	if (u == NULL)
		return (NULL);
	while (i <= len)
	{
		u[i] = str[i];
		i++;
	}
	return (u);
}
