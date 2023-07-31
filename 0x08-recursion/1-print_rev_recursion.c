#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion
 * @s: Pointer to the string to be printed in reverse
 */
void _print_rev_recursion(char *s)
{
    if (*s == '\0')
        return; // Base case: Stop recursion when the end of the string is reached

    _print_rev_recursion(s + 1); // Move to the next character in the string recursively
    _putchar(*s); // Print the current character after the recursive call (in reverse order)
}

