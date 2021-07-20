#include <stdio.h>

/**
 * int_index - function that looks for the index of integer
 * @array: the current array in use
 * @cmp: the poinyter to the function
 * @size: size of the array
 *
 * Return: the index (i)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || size <= 0 || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if(cmp(array[i]))
			return (i);
	}
	return (-1);
}
