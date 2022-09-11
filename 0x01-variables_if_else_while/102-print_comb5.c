#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that prints all possible combinations
 *
 * Descriptin: using main function
 * This program will prints "Combination of numbers
 * Return: 0
 */
int main(void)
{
	int x, y;

	for (x = 0; x <= 98; x++)
	{
		for (y = y + 1; y <= 99; y++)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar(' ');
			putchar((y / 10) + '0');
			putchar((y % 10) + '0');

			if (x == 98 && y == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
