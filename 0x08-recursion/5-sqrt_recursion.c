#include "main.h"

/**
 * _sqrt_helper - helper function to find the square root
 * @n: number to find the square root of
 * @guess: current guess for the square root
 * Performs the actual recursion to find the square root
 *
 * Return: The square root of -1 if n does not have a natural square root
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (_sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: The natural square root or -1 if n does not hv a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
