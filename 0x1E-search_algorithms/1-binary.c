#include "search_algos.h"

/*
 * print - a function that prints an array
 *
 * @array: Pointer to the first element in array
 * @left: first element index
 * @right: Last element index
 */

void print(int *array, size_t left, size_t right)
{
	printf("Searching in array: ");
	while (left < right)
	{
	      printf("%d, ", array[left]);
	      left++;
 	      }
	printf("%d\n", array[left]);
	return;
}

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
	size_t left, right, mid;

	left = 0;
	right = size - 1;
	while (left <= right)
	{
		mid = (left + right) / 2;
		print(array, left, right);
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}
