#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>

/* Function prototype for _putchar */
int _putchar(char c);

/* Function prototypes for task functions */
char *create_array(unsigned int size, char c);
char *_strdup(const char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif /* MAIN_H */

