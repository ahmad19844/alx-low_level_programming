#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase
 *
 * Description: that program will prints" The lower case alphabet
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <='z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}


