#include "main.h"

/**
 * _isupper - Entry point
 *
 * Description: Checks for uppercase characters
 *
 * @c: carrier integer variable
 *
 * Return: 1 if true, 0 if false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
