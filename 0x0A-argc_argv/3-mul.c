#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints two multiplied integers
 *
 * @mul: int variable that multiplies two numbers
 * @argc: counts arguments
 * @argv: prints arguments
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{

	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
