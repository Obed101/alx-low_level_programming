#include "holberton.h"
/**
 * swap_int - swaps the variables stated
 *
 * @a: is an integer
 * @b: another integer
 *
 * Return: Always Success
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
