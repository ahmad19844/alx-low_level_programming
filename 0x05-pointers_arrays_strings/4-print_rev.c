#include "main.h"

/**
 * print_rev - prints a string and new line
 * @s: String to be reversed
 */
void print_rev(char *s)
{
	int len = strlen(s);

	while (len --)
		putchar(*(s + len));
	putchar(20);
}
