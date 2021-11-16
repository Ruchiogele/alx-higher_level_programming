#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_node - Inserts a number into a sorted linked list.
 * @head: Pointer to the  first node of listint_t list.
 * @number: Integer to be assigned into the new node.
 * Return: Upon sucess the address of the new node. Otherwise NULL.
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *current, *temp, *new_node;

	current = *head, temp = *head, new_node = NULL;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new_node->n = number;
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	if (temp == NULL)
		return (NULL);
	if (temp->n >= number)
	{
		new_node->n = number;
		new_node->next = temp;
		*head = new_node;
		return (new_node);
	}
	while (current->next)
	{
		current = current->next;
		if (current->n >= number)
		{
			new_node->n = number;
			new_node->next = current;
			temp->next = new_node;
			return (new_node);
		}
		else
			temp = temp->next;
	}
	new_node = add_nodeint_end(head, number);
	return (new_node);
}
