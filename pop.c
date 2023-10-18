#include "monty.h"
/**
 * f_pop - This function prints the top
 * @head: The stack head to tyhe stack_t list
 * @counter: The line_number used
 * written by Daniel Mayowa || Moses Iluyemi
 * Return: no return n othin always (0)
*/
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *g;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	g = *head;
	*head = g->next;
	free(g);
}
