#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Entry point.
 *
 * Description: Prints a name.
 * @name: name to print.
 * @f: pointer to the printing function.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}