#include <stdio.h>

/**
 * main - prints the number of arguments it receive\s
 *
 *@argc: counts the number of arguments
 *@argv: prints the argument strings, a pointer
 *Return: 0 if successful
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
