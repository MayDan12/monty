#include "monty.h"
/**
 * f_add - This is a function that adds the top two
 * elements of the stack.
 * @head: This is the stack head
 * @counter: The line_number
 * Written by Daniel Mayowa || Moses Iluyemi
 * Return: return Nothing always (0)
*/
void f_add(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	g = *head;
	auxi = g->n + g->next->n;
	g->next->n = auxi;
	*head = g->next;
	free(g);
}
