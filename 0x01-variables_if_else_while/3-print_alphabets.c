#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that prints the alphabet in lower_and_upper_case
 *
 * Description: using the main function
 * this program prints "Alphabet in lower case and upper case
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	char d = 'A';

	while(c <= 'z')
	{
		putchar(c);
		c ++;
	}
	while(d <= 'Z')
	{
		putchar(d);
		d ++;
	}
	putchar('\n');
	return (0);
}
