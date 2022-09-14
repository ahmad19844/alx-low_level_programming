#include "main.h"
/**
 * main -print the last digit of a number
 * @n the number given
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;
	if (last_digit < 0)
		last_digit += -1 ;
	_putcha(last_digit + '0');
	return (last_digit);
}


