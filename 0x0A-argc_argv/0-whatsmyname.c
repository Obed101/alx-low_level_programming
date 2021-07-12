#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *@argc: variable that counts the number of strings
 *@argv: variable, array, pointer, of strings
 *exit: stops everything if success, print correct output
 */

int main(int argc, char **argv)
{
	while(argc--)
	printf("%s\n", *argv++);

	exit(EXIT_SUCCESS);
}
