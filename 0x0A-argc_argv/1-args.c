#include <stdio.h>

/**
 * main - prints the number of arguments
 *
 * @argc: used to count arguments
 * @argv: not really used. but prints the arguments
 *
 * return: 0 if successful
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);

	return (0);
}
