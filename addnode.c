#include "monty.h"
/**
 * addnode - This function add a node to the head stack
 * @head: The head of the stack of stack_t list
 * @n: The new_value used
 * Return: return Nothing always (0)
 * Wtitten by Daniel Mayowa|| Moses Iluyemi
*/
void addnode(stack_t **head, int n)
{

	stack_t *newsnode, *auxi;

	auxi = *head;
	newsnode = malloc(sizeof(stack_t));
	if (newsnode == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (auxi)
		auxi->prev = newsnode;
	newsnode->n = n;
	newsnode->next = *head;
	newsnode->prev = NULL;
	*head = newsnode;
}
