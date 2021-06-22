#include <stdio.h>
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int print_alphabet(void)
{
	char a = 'a';

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar ('\n');
	return (0);
}
