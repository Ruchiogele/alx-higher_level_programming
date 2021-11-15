#include "lists.h"

/**
 * check_cycle - function to check if a singly linked list has a cycle in it
 *
 * @list: linked list to check
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */

int check_cycle(listint_t *list)
{
	listint_t *newlist = NULL;
	listint_t *check = NULL;

	if (list == NULL)
		return (0);

	newlist = list;
	check = list->next;

	while (check != NULL && check->next != NULL)
	{
		if (check == newlist)
			return (1);
		newlist = newlist->next;
		check = (check->next)->next;
	}
	return (0);
}
