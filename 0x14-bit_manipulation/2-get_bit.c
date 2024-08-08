#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The number to be checked
 * @index: The index, starting from 0 of the bit to get
 *
 * Return: The value of the bit at index @index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n & (1ul << index)) ? 1 : 0);
}
