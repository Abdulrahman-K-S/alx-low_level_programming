#include <unistd.h>

/**
 * main - Entry Point
 *
 * Description: Prints a string without the use of
 * printf and puts
 *
 * Return: 1 if succsesful
*/

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
