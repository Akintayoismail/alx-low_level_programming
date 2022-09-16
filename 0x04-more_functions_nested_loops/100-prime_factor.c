#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int o, s;

	o = 612852475143;
	for (s = 2; s <= o; s++)
	{
		if (o % s == 0)
		{
			o /= s;
			s--;
		}
	}
	printf("%ld\n", s);
	return (0);
}
