#include <stdio.h>

/**
 *main - entry point
 *@argc: variable that counts the number of arguments
 *@argv: variable, array, pointer, of strings
 *return: stops everything if success, print correct output
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
