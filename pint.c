#include "monty.h"
/**
 * f_pint - This function always prints the top
 * @head: The stack head if the stack_t list
 * @counter: The line_number used
 * Return: no return Nothing Always (0)
 * Written by Daniel Mayowa || Moses Iluyemi
*/
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
