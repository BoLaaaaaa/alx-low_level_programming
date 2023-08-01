#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Double pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *slow = *h;
listint_t *fast = *h;
listint_t *tmp;
size_t count = 0;
if (h == NULL || *h == NULL)
return (0);
while (fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
{
slow = *h;
while (slow != fast)
{
tmp = fast->next;
free(fast);
count++;
fast = tmp;
}
*h = NULL;
free(slow);
count++;
return (count);
}
}
slow = *h;
while (slow != NULL)
{
tmp = slow->next;
free(slow);
count++;
slow = tmp;
}
*h = NULL;
return (count);
}
