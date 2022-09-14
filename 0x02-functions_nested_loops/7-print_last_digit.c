#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * @i: Inputed integer.
 *
 * Description: prints final digits in number.
 *
 * Return: last digit
 */

int print_last_digit(int i)
{
	int I;

	I = i % 10;

	if (I < 0)
	{
		_putchar(-I + 48);
		return (-I);
	}
	else
	{
		_putchar(I + 48);
		return (I);
	}
}
