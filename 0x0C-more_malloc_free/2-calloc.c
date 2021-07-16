#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - allocates multiple blocks of memory
 *@nmemb: unsigned int argument to calloc
 *@size: the size to add
 *
 * Return: a pointer on success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		ptr[i] = 0;
	return (ptr);
}
