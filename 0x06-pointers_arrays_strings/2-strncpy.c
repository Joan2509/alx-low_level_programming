#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: stores the string copy
 * @src: the source string
 * @n: integer parameter to compare index to
 * Return: the destination
 */

char *_strncpy(char *dest, char *src, int n);
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
