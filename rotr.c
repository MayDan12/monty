#include "monty.h"
/**
 * f_rotr- This function rotates to the bottom of the stack
 * @head: This is the stack head
 * @counter: The line_number Used
 * Written by Daniel Mayowa || Moses Iluyemi
 * Return: return Nothing always (0)
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *Copied;

	Copied = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (Copied->next)
	{
		Copied = Copied->next;
	}
	Copied->next = *head;
	Copied->prev->next = NULL;
	Copied->prev = NULL;
	(*head)->prev = Copied;
	(*head) = Copied;
}
