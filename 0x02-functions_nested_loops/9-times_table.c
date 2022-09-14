#include "main.h"
/**
 * times_table - Entry point
 *
 * Description: prints the 9 times table, starting with 0.
 *
 * Return: void
 */

void times_table(void)
{
	int x, y, dg;

	for (x = 0; x < 10; x++)
	{
		_putchar('0');
		for (y = 1; y < 10; y++)
		{
			dg = x * y;
			_putchar(',');
			_putchar(' ');
			if (dg < 10)
				_putchar(' ');
			else
				_putchar((dg / 10) + '0');
			_putchar((dg % 10) + '0');
		}
		_putchar('\n');
	}
}
