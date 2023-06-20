#include <stdio.h>

int main(void)
{
int count = 50;
unsigned long long fib1 = 1, fib2 = 2, fib_next;

printf("%llu, %llu", fib1, fib2);

for (int i = 3; i <= count; i++)
{
fib_next = fib1 + fib2;
printf(", %llu", fib_next);
fib1 = fib2;
fib2 = fib_next;
}

printf("\n");

return (0);
}
