#include <stdio.h>
/**
 * print_alphabet - prints the english alphabet from a-z.
 * Return: Nothing.
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
