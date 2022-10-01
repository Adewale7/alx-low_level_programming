#include "main.h"

/**
 * _puts - entry point
 * @str: string to be printed
 * Description: prints a string, followed by a new line, to stdout.
 *
 * Return: no return value.
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar(10);
}
