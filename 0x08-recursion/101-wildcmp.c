#include "main.h"

/**
 * wildcmp - Compares two strings and returns 1 if identical, otherwise 0.
 * @s1: The first input string
 * @s2: The second input string
 *
 * Return: 1 if identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
if (*(s2 + 1) == '*')
return wildcmp(s1, s2 + 1);
else if (*(s2 + 1) == '\0')
return (1);
else if (*s1 == '\0')
return (0);
else
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
}
else if (*s1 != *s2)
return (0);
else if (*s1 == '\0')
return (1);
return (wildcmp(s1 + 1, s2 + 1));
}
