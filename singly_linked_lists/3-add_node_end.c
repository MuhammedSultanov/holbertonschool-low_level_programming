#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - a function that adds a new node at the end of a list_t list.
 * @head: header node of singly linked list
 * @str: string
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int lens = 0;

	for (lens = 0; str[lens] != '\0'; lens++)
		;
	list_t *new_node;
	list_t *temp;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = lens;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (NULL);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_mode;
	return (*head);
	}
}
