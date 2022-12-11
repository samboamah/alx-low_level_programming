#include "lists.h"

/**
 * print_dlistint - prints all of doubly linked list nodes
 * @h: pointer to head of doubly linked list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t c;
for (c = 0; h; c++)
{
printf("%i\n", h->n);
h = h->next;
}
return (c);
}