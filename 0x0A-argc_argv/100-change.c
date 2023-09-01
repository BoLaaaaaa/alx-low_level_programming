#include "main.h"
#include <stdlib.h>
/**
 * main - Entry point of the program
 * @argc: The number of arguments
 * @argv: An array of pointers to the arguments
 * Return: 0 on success, 1 on failure
 */
#include <stdio.h>
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
return (1);
}
int cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}
int coins = 0;
int values[] = {25, 10, 5, 2, 1};
for (int i = 0; i < 5; i++)
{
while (cents >= values[i])
{
cents -= values[i];
coins++;
}
}
printf("%d\n", coins);
return (0);
}
