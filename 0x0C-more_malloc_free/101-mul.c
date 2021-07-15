#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - function
 *@ac: integer to receive as argument
 *@av: character
 *Return: int
 */
int main(int ac, char **av)
{
	long int num1 = 0, num2 = 0, mul;

	if (ac != 3)
	{
		puts("Error");
		exit(98);
	}
	else
	{
		num1 = atoi(av[1]);
		num2 = atoi(av[2]);
		mul = num1 * num2;

		if (isdigit(num1) && isdigit(num2))

		{
			printf("%ld\n", mul);
			return (0);
		}
		else
		{
			puts("Error\n");
			exit(98);
		}
	}
	return(0);
}
