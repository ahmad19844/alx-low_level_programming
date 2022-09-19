#include "main.h"

/**
 * Swap_int - Switches Value of First input with the value of the second input.
 * @a: First number to swap.
 * @b: Second number to swap.
 * Descriptin: Using main function
 * This function prints "Swap number
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
