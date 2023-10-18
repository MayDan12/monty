#include "monty.h"
/**
 * f_div - This function divides the top
 * two elements of the stack.
 * @head: The stack head of the stack_t
 * @counter: The line_number Used
 * Written by Daniel Mayowa || Moses Iluyemi
 * Return: return Nothing always
*/
void f_div(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	g = *head;
	if (g->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	auxi = g->next->n / g->n;
	g->next->n = auxi;
	*head = g->next;
	free(g);
}
