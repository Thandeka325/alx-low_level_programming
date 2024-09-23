int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/**
 * add - Adds two integers
 * @a: Fist integer to add
 * @b: Second integer to add
 * Return: The sum
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two integers
 * @a: First integer to subtract
 * @b: Second integer to subtract
 * Return: The subtract
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers
 * @a: First integer to multiply
 * @b: Second integer to multiply
 * Return: The multiple
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides two integers
 * @a: first integer to divide
 * @b: Second integer to divide
 * Return: The divided integer
 */
int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - Finds the modulus of two integers
 * @a: First integer to modulate
 * @b: Second integer to modulate
 * Return: The modulus
 */
int mod(int a, int b)
{
	return (a % b);
}
