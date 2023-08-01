#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow = head;
const listint_t *fast = head;
size_t count = 0;
while (fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
{
printf("-> [%p] %d\n", (void *)head, head->n);
exit(98);
}
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
count++;
}
printf("[%p] %d\n", (void *)head, head->n);
count++;
return (count);
}
