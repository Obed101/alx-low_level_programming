#include <stdio.h>
/**
  *main - Entry point
  *
  *Return: Always 0 (Success)
  */
int print_alphabet_x10()

{
        char a = '0', b;

	while(a <= 10)
	{
		b = 'a';

		while(b <= 'z')
		{
			putchar(a);
				a++;
		}
		putchar('\n');
			a++;
        }
        return (0);
}
