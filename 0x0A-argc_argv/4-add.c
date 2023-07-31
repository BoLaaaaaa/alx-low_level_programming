#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of arguments
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
int i, num, sum;
if (argc < 2)
{
printf("0\n");
return (0);
}
sum = 0;
for (i = 1; i < argc; i++)
{
for (num = 0; argv[i][num]; num++)
{
if (argv[i][num] < '0' || argv[i][num] > '9')
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
