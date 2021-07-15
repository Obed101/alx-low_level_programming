#include <stdlib.h>
#include "holberton.h"

/**
 * *array_range - function that controls the range of array space
 * @min: minimun size
 * @max: maximum size os array
 *
 * Return: pointer on success, NULL of failure
 */
int *array_range(int min, int max)
{

	int *p;
	int i, sz;

	if (min > max)
		return (NULL);
	sz = (max - min) + 1;
	p = malloc(sz * sizeof(*p));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < sz && min <= max; i++, min++)
		*(p + i) = min;
	return (p);}
}
