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

	if (*h == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if(newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode = add_dnodeint(h, n);
	}
	while (c <= idx)
	{
		if (c == idx)
		{
			newnode->next = temp;
			if (newnode->next != NULL)
			{
			newnode->prev = temp->prev;
			temp->prev = newnode;
			}
			if(newnode->prev != NULL)
			{
				newnode->prev->next = newnode;
				break;
			}
			*h = newnode;
		}
		if (temp->next != NULL)
		temp = temp->next;
		else
		{
			free(newnode);
			return (NULL);
		}
		c++;
	}
	return (newnode);
}
