#include "main.h"

/**
 * calculate_sqrt - Recursive helper function to calculate the square root
 * @n: The number to calculate the square root for
 * @guess: The current guess for the square root
 *
 * Return: The square root of n, or -1 if it doesn't have a natural square root
 */
int calculate_sqrt(int n, int guess)
{
int new_guess;
if (guess * guess == n)
return (guess);
if (guess * guess > n)
return (-1);
new_guess = guess + 1;
return (calculate_sqrt(n, new_guess));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to calculate the square root for
 *
 * Return: The square root of n, or -1 if it doesn't have a natural square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (calculate_sqrt(n, 0));
}
