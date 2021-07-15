#include "holberton.h"

/**
 * malloc_checked - allocates memory to a pointer using malloc
 * @b: unsigned int variabe to tell which space to alllocate
 * @po: pointer to the allocated space
 *
 * Return: void type
 */
void *malloc_checked(unsigned int b)
{
	int *po;

	*po = malloc(10);

	if(po == NULL)
	{
		exit(98);
	}
	free (*po);

	po = NULL;

	return (0);
}
