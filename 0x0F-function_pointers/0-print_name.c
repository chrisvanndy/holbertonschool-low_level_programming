#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function pointer prints given strings
 * @name: string given
 * @f: pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)

	f(name);
}
