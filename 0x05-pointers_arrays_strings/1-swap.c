#include "main.h"

/**
 * swap_int - swaps two integer values
 * @a: first number
 * @b: scond number
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
int tmp = *a;

*a = *b;
*b = tmp;
}
