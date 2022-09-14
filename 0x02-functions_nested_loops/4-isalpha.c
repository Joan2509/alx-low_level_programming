#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: Is the int that will use for the argument of the function
 * Return: Always zero
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= '2') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
