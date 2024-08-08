#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: The number to be compared.
 * @index: The index starting from 0 of the bit.
 *
 * Return: 1 if it worked, or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= (1ul << index);
	return (1);
}
