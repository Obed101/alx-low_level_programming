#include <stdio.h>
#include <string.h>
char * strncpy(char *dest, const char *src, size_t n)
	int main()
{
               size_t i;

               for (i = 0; i < n && src[i] != '\0'; i++)
                   dest[i] = src[i];
               for ( ; i < n; i++)
                   dest[i] = '\0';

               return dest;
}
