#include "main.h"
/**
 * main - checking lower alphabet
 *
 * Description: using main function
 * This program checks " lower case
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
