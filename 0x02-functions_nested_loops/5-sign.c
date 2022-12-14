#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: int to check
 *
 * Return: 1 and prints + when n greater than zero
 * 0 and prints 0 if n is zero
 * -1 and printsn- if n less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} 
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
       	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	return 0;
}
