#include<stdio.h>

/**
 * main - the main function
 * @num1: first number
 * @num2: second number
 * @mul: the result
 *
 * Return: 0
 */
int mainv(void)
{
	int num1, num2, mul;

	printf("Enter two numbers:");
	scanf("%d %d", &num1, &num2);
	mul = num1 * num2;
	printf("Product of two numbers: %d", mul);
	return  (0);
}
