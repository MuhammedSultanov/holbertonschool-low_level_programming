#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_t - adds a new node at the beginning of a dlistint_t list
 * @head: pointer named head and this first node
 * @n: data
 * Return: the value of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
       	dlistint_t*  nnode;

	nnode = malloc(sizeof(dlistint_t));
	nnode->n = n;
	nnode->next =*head;
	nnode->prev = NULL;

	if ((*head) != NULL)
	{
		(*head)->prev = nnode;
	}
	*head = nnode;
	return (*head);
}
