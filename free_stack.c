#include "monty.h"
/**
* free_stack - This function frees the doubly linked list
* @head: The head of the stack
* Written by Daniel Mayowa || Moses Iluyemi
* Return: Nothing Always (0)
*/
void free_stack(stack_t *head)
{
	stack_t *auxi;

	auxi = head;
	while (head)
	{
		auxi = head->next;
		free(head);
		head = auxi;
	}
}
