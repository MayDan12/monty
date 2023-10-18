#include "monty.h"
/**
 * f_mul - This function multiply the top two elements of the stack.
 * @head: The stack head of the stack_t list
 * @counter: The line_number used
 * Return: no return NOthing always (0)
 * Written by Daniel Mayowa || Moses Iluyemi
*/
void f_mul(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	g = *head;
	auxi = g->next->n * g->n;
	g->next->n = auxi;
	*head = g->next;
	free(g);
}
