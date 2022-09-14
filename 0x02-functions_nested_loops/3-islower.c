#include "main.h"
/**
 * _islower - checks for lower case character
 * @c: is the int that will use for the function's argument
 * Return: Always zero
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
