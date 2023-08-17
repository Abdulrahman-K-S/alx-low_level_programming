#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/*putchar*/
int _putchar(char c);

/*Mandatory Tasks*/
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));


#endif
