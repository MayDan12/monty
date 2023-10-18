#include "monty.h"
/**
 * f_pall - This function prints the stack
 * @head: The stack head
 * @counter: no used counter
 * Written by Daniel Mayowa || Moses Iluyemi
 * Return: no return Nothing Always
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *g;
	(void)counter;

	g = *head;
	if (g == NULL)
		return;
	while (g)
	{
		printf("%d\n", g->n);
		g = g->next;
	}
}
