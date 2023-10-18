#include "monty.h"
/**
 * f_rotl- This function rotates the stack to the top
 * @head: The stack head of the stack_t list
 * @counter: The line_number used
 * written by Daniel Mayowa || Moses Iluyemi
 * Return: no return
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmps = *head, *auxi;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	auxi = (*head)->next;
	auxi->prev = NULL;
	while (tmps->next != NULL)
	{
		tmps = tmps->next;
	}
	tmps->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmps;
	(*head) = auxi;
}
