#include "main.h"
/**
 * print_alphabet - prints the english alphabet from a-z
 *
 * Description: using main function
 * This program prints "Alphabet a-z
 * Return: Nothing.
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
