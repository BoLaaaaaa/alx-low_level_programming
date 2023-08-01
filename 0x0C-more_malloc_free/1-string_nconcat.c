#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings, up to n bytes from s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes to concatenate from s2.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concatenated_str;
unsigned int len_s1 = 0, len_s2 = 0, total_len = 0, i;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len_s1] != '\0')
len_s1++;
while (s2[len_s2] != '\0')
len_s2++;
if (n >= len_s2)
n = len_s2;
total_len = len_s1 + n;
concatenated_str = malloc(sizeof(char) * (total_len + 1));
if (concatenated_str == NULL)
return (NULL);
for (i = 0; i < len_s1; i++)
concatenated_str[i] = s1[i];
for (i = 0; i < n; i++)
concatenated_str[len_s1 + i] = s2[i];
concatenated_str[total_len] = '\0';
return (concatenated_str);
}
