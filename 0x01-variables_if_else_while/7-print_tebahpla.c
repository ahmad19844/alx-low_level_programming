#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that prints the lowercase alphabet in reverse
 *
 * Description: using main function
 * This program prints " Lowercase in reverse ordered
 * Return: 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);
	putchar('\n');

	return (0);
}
