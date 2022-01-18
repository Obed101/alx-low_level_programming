#include "search_algos.h"

/*
 * linear_search - a function that searches for a value
 * using linear search algorithm
 *
 * @array: the pointer to the first element
 * @size: number of elements in @array
 * @value: the value to search for
 * Return: index of the value or -1 on failure
 */
int linear_search(int *array, size_t size, int value)
{
	int i;
	int found = 0;

	while (i < n)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[1]);
		if (array[i] == value)
		{
			found = 1;
			return (array[i]);
		}
		i++;
	}
	return (-1);
}
