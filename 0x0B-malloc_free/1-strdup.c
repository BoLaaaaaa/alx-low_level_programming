#include <stdlib.h>
#include "main.h"

char *_strdup(char *str)
{
char *duplicate;
unsigned int len, i;
if (str == NULL)
return (NULL);
// Calculate the length of the input string
for (len = 0; str[len] != '\0'; len++)
;
// Allocate memory for the new string
duplicate = malloc(sizeof(char) * (len + 1));
if (duplicate == NULL)
return (NULL);
// Copy the characters from the input string to the new string
for (i = 0; i <= len; i++)
duplicate[i] = str[i];
return (duplicate);
}
