#include <stdio.h>

int main(void)
{
unsigned int fib1 = 1, fib2 = 2, fib_next, count = 2;

printf("%u, %u, ", fib1, fib2);

while (count < 98)
{
fib_next = fib1 + fib2;
printf("%u", fib_next);

if (count != 97)
printf(", ");
        
fib1 = fib2;
fib2 = fib_next;
count++;
}

printf("\n");

return (0);
}
