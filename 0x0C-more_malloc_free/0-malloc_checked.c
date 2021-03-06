#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *malloc_checked - allocates memory to a pointer using malloc
 * @b: unsigned int variabe to tell which space to alllocate
 *
 * Return: void on success
 */
void *malloc_checked(unsigned int b)
{
	void *po = malloc(b);

	if (po == NULL)
		exit(98);

	return (po);
}
