#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: String to calculate the length of
 *
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * _is_palindrome_helper - Helper function to check if a string is a palindrome
 * @s: String to check
 * @start: Starting index
 * @end: Ending index
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int _is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (_is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: String to check
 * An empty string is a palindrome
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len == 0)
		return (1);
	return (_is_palindrome_helper(s, 0, len - 1));
}
