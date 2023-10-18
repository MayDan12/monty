#include "monty.h"
/**
 * f_push - This function add node to the stack Lists
 * Written by Daniel Mayowa || Moses Iluyemi
 * @head: This is the stack head used
 * @counter: The line_number used
 * Return: no return Nothing Always (0)
*/
void f_push(stack_t **head, unsigned int counter)
{
	int no, ju = 0, flagg = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			ju++;
		for (; bus.arg[ju] != '\0'; ju++)
		{
			if (bus.arg[ju] > 57 || bus.arg[ju] < 48)
				flagg = 1; }
		if (flagg == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	no = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, no);
	else
		addqueue(head, no);
}
