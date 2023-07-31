#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments
 * @av: An array of pointers to the arguments
 *
 * Return: A pointer to the new concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
char *str;
int total_length = 0;
int i, j;
int k = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
total_length++;
total_length++;
}
str = (char *)malloc(sizeof(char) * (total_length + 1));
if (str == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n';
k++;
}
str[k] = '\0';
return (str);
}
