#include "monty.h"
/**
 * f_swap - This function adds the top two elements of the stack.
 * @head: The stack head of the stack_t list
 * @counter: The line_number used
 * Written by Daniel Mayowa || Moses Iluyemi
 * Return: no return Nothing always (0)
*/
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *g;
	int lens = 0, auxi;

	g = *head;
	while (g)
	{
		g = g->next;
		lens++;
	}
	if (lens < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	g = *head;
	auxi = g->n;
	g->n = g->next->n;
	g->next->n = auxi;
}
