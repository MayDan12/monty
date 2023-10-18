#include "monty.h"
/**
 * f_sub - This function does subtration
 * @head: The stack head of the stack_t list
 * @counter: The line_number used
 * Writen by Daniel Mayowa || Moses Iluyemi
 * Return: no return Nothing always (0)
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *auxi;
	int suse, thenodes;

	auxi = *head;
	for (thenodes = 0; auxi != NULL; thenodes++)
		auxi = auxi->next;
	if (thenodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	auxi = *head;
	suse = auxi->next->n - auxi->n;
	auxi->next->n = suse;
	*head = auxi->next;
	free(auxi);
}
