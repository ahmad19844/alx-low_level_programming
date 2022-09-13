#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that prints _putchar, followed by a new line
 *
 * Description: using main function
 * This program prints " _putchar
 * Return: 0
 */
int main(void)
{
	char c[] = "AHmad";
	in a;

	for (a = 0; a < 9; a++)
	{
		_putchar(c[a]);
	}
	_putchar('\n');
	return (0);
}

