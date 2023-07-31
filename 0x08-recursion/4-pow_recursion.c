#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: The base number
 * @y: The exponent
 *
 * Return: The result of x raised to the power of y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
    if (y < 0)
        return -1; // Error: Negative exponents are not allowed

    if (y == 0)
        return 1; // Base case: Any number raised to the power of 0 is 1

    return x * _pow_recursion(x, y - 1); // Recursive call to calculate the power
}

