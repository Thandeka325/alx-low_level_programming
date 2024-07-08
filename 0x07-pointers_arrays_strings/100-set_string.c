#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: double pointer to be set to point to char
 * @to: char to point to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
