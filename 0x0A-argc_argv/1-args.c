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
int num_args = argc - 1;
_putchar('0' + num_args);
_putchar('\n');
return (0);
}
