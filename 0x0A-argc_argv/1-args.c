#include <stdio.h>

/**
 * main - prints the name number of arguments passed to to it
 * @argc: number of arguments passed to a function
 * @argv: argument vector of pointers to change
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
