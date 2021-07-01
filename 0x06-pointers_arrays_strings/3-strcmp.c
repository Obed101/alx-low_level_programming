#include "holberton.h"
/**
 * _strcmp - compares two strings
 *
 * @s1: first string constant
 * @s2: second string pointer constant
 *
 * return: 1 or 0
 */
int _strcmp(char *s1, char *s2)
{
	int identical = 0;
	int no = 1;

	while( ( *s1 != '\0' && *s2 != '\0' ) && *s1 == *s2 )
	{
		s1++;
		s2++;

	if(*s1 == *s2)
	{
		return (identical); /* strings are identical*/
	}

	else /* if not identical*/
	{
		return (no);
	}
	}
}
