#include "main.h"
/**
 *_strlen - displays the lenght of a string.
 *
 *@s: A variable that reps string pointer
 *Return: Always success
 */
int _strlen(char *s)
{
	int lnt = 0;

	while (*s != '\0')
	{
		lnt++;
		s++;
	}
	return (lnt);
}
