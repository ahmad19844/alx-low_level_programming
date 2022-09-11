#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that prints all the numbers of base_16_in_lower_case
 *
 * Description: using main function
 * This program will prints "All the numbers of base 16_in_lower_cse
 * Return: 0
 */
int main(void)
{
	int x;
	int character;

	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');

	for (character = 'a'; character <= 'f'; character++)
		putchar(character);

	putchar('\n');

	return (0);
}
