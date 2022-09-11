#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that prints all single digit numbers of base 10
 *
 * Decription: using main function
 * this program will prints "all single digit numbers of base 10
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		putchar((a % 10) + '0');
	putchar('\n');

	return (0);
}
