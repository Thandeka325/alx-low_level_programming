#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _print_error - Prints "Error" and exits with status 98
 */
void _print_error(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * _is_digit - Checks if a string is composed only of digits
 * @s: The string to be checked
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int _is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * _print_result - Prints the result of the multiplication
 * @result: The result array
 * @len: The length of the result array
 */
void _print_result(char *result, int len)
{
	int i = 0;

	while (i < len && result[i] == '0')
		i++;
	if (i == len)
		printf("0");
	else
		while (i < len)
			putchar(result[i++]);
	putchar('\n');
}
/**
 * multiply - Multiplies two positive numbers represented as strings
 * @num1: The first number
 * @num2: The second number
 *
 * Return: A pointerr to the result array
 */
char *multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, len, i, j;
	char *result;

	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;
	len = len1 + len2;
	result = malloc(len + 1);
	if (result == NULL)
		_print_error();
	for (i = 0; i <= len; i++)
		result[i] = '0';
	result[len] = '\0';

	for (i = len1 - 1; i >= 0; i--)
	{
		int carry = 0;

		for (j = len2 - 1; j >= 0; j--)
		{
			int n1 = num1[i] - '0';
			int n2 = num2[j] - '0';
			int sum = n1 * n2 + (result[i + j + 1] - '0') + carry;

			carry = sum / 10;
			result[i + j + 1] = (sum % 10) + '0';
		}
		result[i + j + 1] += carry;
	}
	return (result);
}
/**
 * main - Multiplies two positive numbers
 * @argc: The number of arguments
 * @argv: The argument
 *
 * Return: 0 0n success, 98 on failure
 */
int main(int argc, char *argv[])
{
	char *num1, *num2, *result;
	int len1 = 0, len2 = 0;

	if (argc != 3)
		_print_error();
	num1 = argv[1];
	num2 = argv[2];

	if (!_is_digit(num1) || !_is_digit(num2))
		_print_error();
	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;
	result = multiply(num1, num2);
	_print_result(result, len1 + len2);
	free(result);
	return (0);
}
