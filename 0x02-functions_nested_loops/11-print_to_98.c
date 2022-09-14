#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 *
 * @n: The number to begin counting at
 *
 * Description: Print all natural numbers form input to 98
 *
 * Return: print to the 98
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
