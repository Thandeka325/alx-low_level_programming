#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer to compute
 *
 * Takes an integer 'n'
 *
 * Return: The absolute value of the integer
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
