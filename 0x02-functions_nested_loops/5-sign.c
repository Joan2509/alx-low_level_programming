#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: is the int that we will use for the function's argument
 * Return: Always zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
