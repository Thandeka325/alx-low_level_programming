#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("\nsize of the character data type is %d",sizeof(char));
	printf("\nsize of the integer data type is %d",sizeof(int));
	printf("\nsize of the long integer data type is %d",sizeof(long int));
	printf("\nsize of the long long integer data type is %d",sizeof(long long int));
	printf("\nsize of the float data type is %d",sizeof(float));
	return (0);
}
