#include "main.h"

/**
 * main - Entry point of the program
 * @argc: The number of arguments
 * @argv: An array of pointers to the arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int i, j;
for (i = 0; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
_putchar(argv[i][j]);
}
_putchar('\n');
}
return (0);
}
