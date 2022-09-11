#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that prints all possible_combinations_of_single-digit_numbers
 *
 * Description: using main function
 * This program will prints "all possible combinations of_single-dig_tnumbers
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar((x % 10) + '0');
		if (x == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
