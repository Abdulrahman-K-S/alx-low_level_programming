#include <stdio.h>

/**
 * main - A program that prints the number of arguments
 *        passed into the program.
 *
 * @argc: Int.
 * @argv: List.
 *
 * Return: 0 which indicates a success.
*/

int main(int argc, char const *argv[])
{
        int i = 0;

        while (argc--)
        {
                printf("%s\n", argv[i]);
                i++;
        }

        return (0);
}
