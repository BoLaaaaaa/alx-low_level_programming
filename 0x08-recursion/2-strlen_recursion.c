#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion
 * @s: Pointer to the string whose length is to be determined
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
    if (*s == '\0')
        return 0; // Base case: The length of an empty string is 0

    return (1 + _strlen_recursion(s + 1)); // Recursive call with the rest of the string
}

