
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This is also the main the code .
 *
 * Return: This is always zero 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d Is negative\n", n);
	}
	return (0);
}
