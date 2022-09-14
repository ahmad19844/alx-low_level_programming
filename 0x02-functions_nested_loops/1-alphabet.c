#include "main.h"
/**
 * main - print alphabet a-z
 *
 * Description: using main function
 * This program prints "Alphabet a-z
 * Return: 0
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
