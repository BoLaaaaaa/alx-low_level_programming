#include <stdio.h>
#include <stdlib.h>

int minCoins(int cents)
{
int coins[] = {25, 10, 5, 2, 1};
int numCoins = sizeof(coins) / sizeof(coins[0]);
int count = 0;
if (cents < 0)
return 0;
for (int i = 0; i < numCoins; i++)
{
while (cents >= coins[i])
{
cents -= coins[i];
count++;
}
}
return count;
}
int main(int argc, char *argv[])
{
if (argc != 2) {
printf("Error\n");
return 1;
}
int cents = atoi(argv[1]);
int result = minCoins(cents);
printf("%d\n", result);
return 0;
}
