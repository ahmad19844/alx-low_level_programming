#include "main.h"
/**
 * print_alphabet_x10 - repeats the print_alphabet 10 times
 *
 * Description: using main function
 * This program prints "lphabet 10 times
 * Return: 0
 */
void print_alphabet(void)
{
	int a;
	char b;

	for (a = 0; a < 10; ++a)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
