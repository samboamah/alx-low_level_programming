#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer to head of dlist
 * @idx: is the index of the list
 * @n: data of new node
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int c;
dlistint_t *posn = *h, *new;
if (idx == 0)
return (add_dnodeint(h, n));
if (!*h)
return (NULL);
new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);
new->n = n;
for (c = 0; posn; c++)
{
if (idx == c)
{
new->prev = posn->prev;
new->next = posn;
posn->prev = new;
new->prev->next = new;
return (new);
}
if (!posn->next && idx == c + 1)
return (free(new), add_dnodeint_end(h, n));
posn = posn->next;
}
free(new);
return (NULL);
}