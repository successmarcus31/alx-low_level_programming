#include <stdio.h>
#include <unistd.h>

/**
 * main - prints a sentence followed by a new line
 *
 * Return: returns 1 after printing
*/

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
