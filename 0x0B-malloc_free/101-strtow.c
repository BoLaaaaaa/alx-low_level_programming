#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * count_words - Count the number of words in a string.
 * @str: The input string
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
int count = 0, i = 0;
while (str[i] != '\0')
{
while (str[i] == ' ')
i++;
if (str[i] != '\0' && str[i] != ' ')
{
count++;
while (str[i] != ' ' && str[i] != '\0')
i++;
}
}
return (count);
}

/**
 * strtow - Split a string into words.
 * @str: The input string
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails
 */
char **strtow(char *str)
{
char **words;
int i, j, k, len, count;
if (str == NULL || *str == '\0')
return (NULL);
count = count_words(str);
if (count == 0)
return (NULL);
words = (char **)malloc((count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
i = 0;
k = 0;
while (str[i] != '\0' && k < count)
{
while (str[i] == ' ')
i++;
len = 0;
while (str[i + len] != ' ' && str[i + len] != '\0')
len++;
words[k] = (char *)malloc((len + 1) * sizeof(char));
if (words[k] == NULL)
{
for (j = 0; j < k; j++)
free(words[j]);
free(words);
return (NULL);
}
for (j = 0; j < len; j++)
words[k][j] = str[i++];
words[k][j] = '\0';
k++;
}
words[k] = NULL;
return (words);
}
