#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - a program that prints all possible_different_combinations_of_two_dig
 *
 * Description: using main function
 * This program will prints "All possible diffrent_combination_of_two_digits
 * Return: 0
 */
int main(void)
{
	int int1, int2;

	for (int1 = 0; int1 < 9; int1++)
	{
		for (int2 = int1 + 1; int2 < 10; int2++)
		{
			putchar((int1 % 10) + '0');
			putchar((int2 % 10) + '0');

			if (int1 == 8 && int2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
