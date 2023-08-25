#include <stdio.h>

void before_main() __attribute__((constructor));

/**
 * before_main - A function that writes out a sentence before
 *               the execution of the main.
*/
void before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
