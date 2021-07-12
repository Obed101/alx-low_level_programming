#include <stdio.h>

/**
 * main - Print the name of this file
 * @argc: Argument counter
 * @argv: Array, pointer variable, of argument strings
 *
 * Return: 0 if successful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
