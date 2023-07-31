#include "main.h"

/**
 * check_prime - Recursive helper function to check if a number is prime
 * @n: The number to check if it's prime
 * @div: The divisor to check if n is divisible by
 *
 * Return: 1 if the number is prime, otherwise 0
 */
int check_prime(int n, int div)
{
if (n <= 1)
return (0);
if (div >= n)
return (1);
if (n % div == 0)
return (0);
return (check_prime(n, div + 1));
}
/**
 * is_prime_number - Returns 1 if the input integer is aprime number,otherwise
 * @n: The number to check if it's prime
 *
 * Return: 1 if the number is prime, otherwise 0
 */
int is_prime_number(int n)
{
return (check_prime(n, 2));
}
