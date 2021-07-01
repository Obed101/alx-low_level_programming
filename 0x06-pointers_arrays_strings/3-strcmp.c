#include "holberton.h"
/**
 * _strcmp - compares two strings
 *
 * @s1: first string variable
 * @s2: second string pointer variable
 *
 * return: 1 or 0
 */
int _strcmp(char *s1, char *s2)
{
    while( ( *s1 != '\0' && *s2 != '\0' ) && *s1 == *s2 )
    {
        s1++;
        s2++;
    }

    if(*s1 == *s2)
    {
	    return (0); /* strings are identical*/
    }

    else /* if not identical*/
    {
	    return (1);
    }
}
