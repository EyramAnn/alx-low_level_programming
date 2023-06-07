#include "lists.h"

/**
 * add_nodeint_end - issues node at end of listint_t
 * @head: pointer to list
 * @n: value to set node
 *
 * Return: Success Always
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
listint_t *last_node = *head;

if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

while (last_node->next != NULL)
last_node = last_node->next;


last_node->next = new_node;

return (new_node);
}
