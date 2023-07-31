#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: The number to calculate the factorial for
 *
 * Return: The factorial of the number, or -1 if an error occurs
 */
int factorial(int n)
{
    if (n < 0)
        return -1; // Error: Negative numbers don't have factorial

    if (n == 0)
        return 1; // Base case: Factorial of 0 is 1

    return n * factorial(n - 1); // Recursive call to calculate factorial
}

