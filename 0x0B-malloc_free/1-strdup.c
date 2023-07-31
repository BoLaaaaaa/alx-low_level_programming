#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string in a newly allocated memory.
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL if str is NULL or if allocation fails
 */
char *strdup(char *str)
{
char *duplicate;
unsigned int length = 0, i;
if (str == NULL)
return (NULL);
while (str[length] != '\0')
length++;
duplicate = (char *)malloc((length + 1) * sizeof(char));
if (duplicate == NULL)
return (NULL);
for (i = 0; i <= length; i++)
duplicate[i] = str[i];
return (duplicate);
}
