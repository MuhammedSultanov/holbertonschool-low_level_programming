#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list
 * @head: pointer named head and this first node
 * @index: the index of the node, starting from 0
 * Return: the nth node of a linked list.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *newnode;
	unsigned int c = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (*h == NULL)
		return (NULL);
	newnode->n = n;
	while (temp != NULL)
	{
		if (c == idx)
		{
			newnode->next = temp->next;
			temp->next = newnode;
			newnode->prev = temp;
			if (newnode->next != NULL)
			{
				newnode->next->prev = newnode;
			}
		}
		temp = temp->next;
		c++;
	}
	return (temp);
}
