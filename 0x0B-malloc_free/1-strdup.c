#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

char *_strdup(char *str)
{
if (str == NULL)
return NULL;
size_t length = strlen(str) + 1;
char *duplicate = (char *)malloc(length);
if (duplicate != NULL)
{
strcpy(duplicate, str);
return duplicate;
}
return NULL;
}
