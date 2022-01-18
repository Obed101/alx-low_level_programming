#include "search_algos.h"

/*
 * biniary_search - a function that implements binary search algo
 * in a sorted array
 *
 * @array: pointer to the first element
 * @size: number of elements in array
 * @value: the value to search for
 * @return: The index on success else -1
 */
int binary_search(int *array, size_t size, int value)
{
	int i;
	int found = 0;
	int left, right;
	int mid;

	left = 0;
	right = size - 1;
	mid = right / 2;
	if (value)
	{
		if (array[mid] == value)
		{
			found = 1;
			return (mid);
		}
		if (array[mid] > value)
		{
			right = mid - 1;
			return binary_search(array, size, value);
		}
		left = mid + 1;
		return binary_search(array, size, value);
	}
	return (-1);
}
