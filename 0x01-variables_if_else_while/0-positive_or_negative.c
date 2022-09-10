#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Main - A random number to the variable n each time it is executed.
 *
 * Description: Get a random number and print the number
 *
 * Return: - Always 0.
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
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
