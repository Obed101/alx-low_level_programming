#include "search_algos.h"

/*
 *
 *
 *
 *
 *
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
