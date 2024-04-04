#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @head: pointer named head and this first node
 * @idx: the index of the node, starting from 0
 * @n: value
 * Return: insersts node at a given index
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
		if (c == idx - 1)
		{
			newnode->next = temp->next;
			temp->next = newnode;
			newnode->prev = temp;
			if (newnode->next != NULL)
			{
				newnode->next->prev = temp;
			}
		}
		temp = temp->next;
		c++;
	}
	return (temp);
}
