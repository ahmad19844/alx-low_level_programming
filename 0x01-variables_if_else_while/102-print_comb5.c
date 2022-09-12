#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints all possible combinations of two two-digit numbers,
 *        ranging from 0-99, separated by a comma followed by a space
 *
 * Descriptin: using main function
 * This program will prints "Combination of numbers
 * Return: 0
 */
int main(void)
{
	int x = 0, y;

	while (x <= 99)
	{
		y = x;
		while (y <= 99)
		{
			if (y != x)
			{
				putchar((x / 10) + 48);
				putchar((x % 10) + 48);
				putchar(' ');
				putchar((y / 10) + 48);
				putchar((y % 10) + 48);
				if (x != 98 || y != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++y;
		}
		++x;
	}
	putchar('\n');
	return (0);
}
