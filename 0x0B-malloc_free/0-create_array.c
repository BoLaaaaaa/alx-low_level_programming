#include <stdlib.h>

int main(void)
{
char *buffer;
buffer = create_array(98, 'H');
if (buffer == NULL)
{
printf("failed to allocate memory\n");
return (1);
}
for (int i = 0; i < 98; i++)
{
printf("%c ", buffer[i]);
if ((i + 1) % 10 == 0)
printf("\n");
}
free(buffer);
return (0);
}
