#include "main.h"

/**
 * _strlen - Calculates the length of a string
 * @s: The input string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
    if (*s == '\0')
        return 0;

    return (1 + _strlen(s + 1));
}

/**
 * check_palindrome - Recursive helper function to check if a string is a palindrome
 * @s: The input string
 * @start: The index of the start character
 * @end: The index of the end character
 *
 * Return: 1 if the string is a palindrome, otherwise 0
 */
int check_palindrome(char *s, int start, int end)
{
    if (start >= end)
        return 1;

    if (s[start] != s[end])
        return 0; 

    return check_palindrome(s, start + 1, end - 1); 
}

/**
 * is_palindrome - Returns 1 if a string is a palindrome and 0 if not
 * @s: The input string
 *
 * Return: 1 if the string is a palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
    int len = _strlen(s);

    if (len <= 1)
        return 1; 

    return check_palindrome(s, 0, len - 1);
}

