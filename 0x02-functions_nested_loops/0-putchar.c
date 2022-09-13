#include "holberton.h"
#include <string.h>
#include <stdio.h>
/**
 * main - prints the string "Ahmad" from a character array.
 * Return: 0 on success
 */
int main(void)
{
	char c[] = "Ahmad";
	in a;

	for (a = 0; a < 9; a++)
	{
		_putchar(c[a]);
	}
	_putchar('\n');
	return (0);
}

