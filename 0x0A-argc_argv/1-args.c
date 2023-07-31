#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of arguments
 * @argv: An array of pointers to the arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[] _attribute _((unused)))
{
int num_args = argc - 1;
_putchar('0' + num_args);
_putchar('\n');
return (0);
}
