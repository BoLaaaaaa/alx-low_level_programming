#include <function_pointers.h>
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 98 on wrong number of arguments, 99 on invalid operator,
 *         and 100 on division by zero
 */
int main(int _attribute_((_unused_)) argc, char *argv[])
{
int num1, num2, result;
int (*op_func)(int, int);
if (argc != 4)
{
printf("Error\n");
return (98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
if (!(*argv[2] == '+' || *argv[2] == '-' || *argv[2] == '*' || *argv[2] == '/' || *argv[2] == '%'))
{
printf("Error\n");
return (99);
}
if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
{
printf("Error\n");
return (100);
}
op_func = get_op_func(argv[2]);
if (!op_func)
{
printf("Error\n");
return (99);
}
result = op_func(num1, num2);
printf("%d\n", result);
return (0);
}
