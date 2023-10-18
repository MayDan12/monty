#include "monty.h"
/**
 * f_pstr - This function prints the string
 * starting at the top of the stack, followed by a new
 * Written by Daniel Mayowa || Moses Iluyemi
 * @head: The stack head
 * @counter: The line_number
 * Return: no return Nothin Always
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *g;
	(void)counter;

	g = *head;
	while (g)
	{
		if (g->n > 127 || g->n <= 0)
		{
			break;
		}
		printf("%c", g->n);
		g = g->next;
	}
	printf("\n");
}
