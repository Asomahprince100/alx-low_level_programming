#include <stdio.h>

/**
 * main - This is the main work
 *
 * Return: This is the return value
 */

int main(void)
{
	printf("Size of a char : %lu byte(s)", sizeof(char));
	printf("Size of int : %lu byte(s)", sizeof(int));
	printf("Size of a long int : %lu byte(s)", sizeof(long int));
	printf("Size of a long long int : %lu byte(s)", sizeof(long long int));
	printf("Size of a float : %lu byte(s)", sizeof(float));
	return (0);
}
