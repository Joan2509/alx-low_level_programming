#include "main.h"
/**
 * len - returns the lenth of a string
 * @str: string counted
 * Return: returns the length
 */
int len(char *str)
{
	int len = 0;

	if (str != NULL)
	{
		while (str[len])
			len++;
	}
		return (len);
}

