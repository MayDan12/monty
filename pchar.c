#include "monty.h"
/**
 * f_pchar - This is the function that prints the char at the top
 * of the stack, followed by a new line
 * @head: This is the stack head used
 * @counter: The line_number used
 * Written by Daniel Mayowa || Moses Iluyemi
 * Return: return Nothing always (0)
*/
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *g;

	g = *head;
	if (!g)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (g->n > 127 || g->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", g->n);
}
