#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - point if the number is positive, zero, or negative
 *
 * Decription: using the main function
 * program will assign a random number to the variable n each time it is executed.
 * Return 0
 */
int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;

	if (i > 5)
	{
		printf("Last digit of %d is %d is greater than 5n\n", n, i);
	}
	else if (i == 0)
	{
		printf("Last digit of %d is %d 0\n", n, i);
	}
	else
	{
		printf("Last digit of %d is %d and isless than 6 and not 0\n", n, i);
	}
	return 0;
}
