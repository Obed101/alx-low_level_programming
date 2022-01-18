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
	int i = 0;
	int left, right;
	int mid;

	left = 0;
	right = size - 1;
	mid = right / 2;
	if (value)
	{
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
			while (i < right)
			{
				if (array[i] == value)
				{
					return (array[i]);
				}
				i++;
			}
		}
		left = mid + 1;
		while (i < left)
		{
			if (array[i] == value)
                                {
                                        return (array[i]);
                                }
                                i++;
		}
	}
	return (-1);
}
