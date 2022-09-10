#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase
 *
 * Description: using main function
 * This program prints "program that prints the alphabet in lowercase
 * Return: 0
 * */
int main(void)
{
	char c = 'a';
	while (c <= 'z')
	{ 
		if (c != 'q' && c != 'e')
		{	
			putchar(c);	
		}	
		c++;
	}
	putchar('\n');
	return (0);
}
