#include <stdio.h>
#include <unistd.h>
/**
 * Description: prints a line followed by a new line
 * main: Prints a sentence
 * return: 0
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
