#include <stdio.h>

/**
 * main - A program that prints the number of arguments passed.
 *
 * @argc: Number of comandline arguments.
 * @argv: Pointer to an array of command line arguments.
 *
 * Return: 0 which indicates a success.
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
