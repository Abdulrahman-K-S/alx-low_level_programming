#include "main.h"

/**
 * set_bit - A function that sets the value of a bit to 1 at a given index.
 *
 * @n: The entire bit.
 * @index: Is the index, starting from 0 of the bit you want to set.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n |= 1L << index));
}
