#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two positive numbers.
 * @argc: The number of command line arguments (should be 3).
 * @argv: An array of strings containing the command line arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
if (argc != 3)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
if (num1 <= 0 || num2 <= 0)
{
printf("Error\n");
return (1);
}
result = num1 * num2;
printf("%d\n", result);
return (0);
}
