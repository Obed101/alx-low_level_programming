#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - print a name
 * @name: name of the person
 * @f: function pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;
	f(name);
}
