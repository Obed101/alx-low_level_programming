#include <stdio.h>
/**
  *main - Entry point
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	char alphabets = 'a';
	char caps = 'A';

	while (alphabets <= 'z')
	{
       putchar(alphabets);
        alphabets++;
	}
	while (caps <= 'Z')
	{	putchar(caps);
		caps++;
	}
	putchar('\n');
	return (0);
}
