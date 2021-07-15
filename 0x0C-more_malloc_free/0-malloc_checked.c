#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - allocates memory to a pointer using malloc
 * @b: unsigned int variabe to tell which space to alllocate
 * @po: pointer to the allocated space
 *
 * Return: void type
 */
void *malloc_checked(unsigned int b)
{
	void *po;

	po = malloc(b);

	if(po == NULL)
	{
		exit(98);
	}
	else
	{
		return (po);
	}

	return (0);
}
