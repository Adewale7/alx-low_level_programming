#include "main.h"

/**
 * array_range - Entry point.
 *
 * Description: A funtion that creates an array of integers
 *		ordered from min to max, inclusive
 * @min: The first value of the array.
 * @max: The last value of the array.
 *
 * Return: NULL, if min > max or the function fails,
 *         Otherwise return pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
