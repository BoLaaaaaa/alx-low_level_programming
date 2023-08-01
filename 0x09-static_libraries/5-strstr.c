char *_strstr(char *haystack, char *needle)
{
char *h;
char *n;
while (*haystack)
{
h = haystack;
n = needle;
while (*haystack && *n && *haystack == *n)
{
haystack++;
n++;
}
if (!*n)
return (h);
haystack = h + 1;
}
return (NULL);
}
