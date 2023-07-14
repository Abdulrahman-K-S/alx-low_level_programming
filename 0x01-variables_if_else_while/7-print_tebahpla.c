#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that prints the alphabet in reverse
 *
 * Return: (0) Which indicates a success
*/

int main(void)
{
	int ascii;

	for (ascii = 122; ascii >= 97; ascii--)
		putchar(ascii);
	putchar('\n');

	return (0);
}
