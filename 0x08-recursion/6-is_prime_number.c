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
        return 0; // Negative numbers, 0, and 1 are not prime

    if (div >= n)
        return 1; // If no divisor is found, the number is prime

    if (n % div == 0)
        return 0; // If n is divisible by any number other than 1 and itself, it's not prime

    return check_prime(n, div + 1); // Recursive call with the next divisor
}

/**
 * is_prime_number - Returns 1 if the input integer is a prime number, otherwise 0
 * @n: The number to check if it's prime
 *
 * Return: 1 if the number is prime, otherwise 0
 */
int is_prime_number(int n)
{
    return check_prime(n, 2); // Start the recursion with the first divisor, 2
}

