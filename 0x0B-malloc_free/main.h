#ifndef MAIN_H
#define MAIN_H

/* Putchar */
int _putchar(char c);

/* Mandatory */
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

/* Advanced */
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif
