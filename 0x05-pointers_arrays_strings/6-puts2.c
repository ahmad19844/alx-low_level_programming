#include "main.h"

/**
 * puts2 - Prints out other char of the string
 * @str: input string to pri
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	int i;

	while ((str +i) != '\0')
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar(10);
}
