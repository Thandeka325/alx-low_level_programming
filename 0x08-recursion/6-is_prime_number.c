#include "main.h"

/**
 * is_prime_helper - Helper function to check for prime number
 * @n: Number to check
 * @div: current divisor
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int div)
{
	if (n <= 1)
		return (0);
	if (div * div > n)
		return (1);
	if (n % div == 0)
		return (0);
	return (is_prime_helper(n, div + 1));
}

/**
 * is_prime_number - Checks if number is a prime number
 * @n: Number to check
 *
 * Return: 1 if the input integer is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
