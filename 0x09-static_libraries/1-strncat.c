char *_strncat(char *dest, char *src, int n)
{
char *dest_end = dest;
while (*dest_end)
dest_end++;
while (*src && n > 0)
{
*dest_end = *src;
dest_end++;
src++;
n--;
}
*dest_end = '\0';
return (dest);
}
