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
	int *arr;
	int total, i;

	total = max - min + 1;
	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
