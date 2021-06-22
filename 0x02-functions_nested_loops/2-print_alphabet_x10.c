#include <stdio.h>

int main(void)
{
        char a = 'a';

        for (a = 'a'; a <= 'z'; a++)
        {

        char b = '1';

        while (b <= 10)
        {
                putchar(a);
		b++;
        }
        putchar ('\n');
        }
        return (0);
}
