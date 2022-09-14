#include "main.h"

/**
 * _isalpha - Entry point
 *
 * @c: Character printed from ASCII
 *
 * Description: Checks character.
 *
 * Return: 1 if it is a letter, otherwise, 0.
 */

int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c > 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
