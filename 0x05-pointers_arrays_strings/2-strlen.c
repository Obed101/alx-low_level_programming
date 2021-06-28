#include "holberton.h"
/**
 *_strlen - displays the lenght of a string.
 *
 *Return: Always success
 */
int _strlen(char *s)
{
	int lnt = 0;

	while(*s != '\0')
	{
		lnt++;
		s++;
	}
	return(lnt);
}
