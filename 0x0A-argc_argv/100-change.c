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
int amount, coins = 0;
if (argc != 2)
{
printf("Error\n"); 
return (1);
}
amount = atoi(argv[1]);
if (amount < 0)
{
printf("0\n");
return (0);
}
while (amount > 0)
{
if (amount >= 25)
{
coins += amount / 25;
amount %= 25;
}
else if (amount >= 10)
{
coins += amount / 10;
amount %= 10;
}
else if (amount >= 5)
{
coins += amount / 5;
amount %= 5;
}
else if (amount >= 2)
{
coins += amount / 2;
amount %= 2;
}
else
{
coins += amount;
amount = 0;
}
}
printf("%d\n", coins);
return (0);
}
