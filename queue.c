#include "monty.h"
/**
 * f_queue - This function always prints the top
 * @head: The stack head of the stack_t list
 * @counter: The line_numberc used
 * Return: no return Nothing Always (1)
 * Written by Daniel Mayowa || Moses Iluyemi
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - This Function add a node to the tail stack
 * @n: The new_value used
 * @head: The head of the stack of the stack_t list
 * written by Daniel Mayowa ||
 * Return: no return Nothing always (0)
*/
void addqueue(stack_t **head, int n)
{
	stack_t *newsnode, *auxi;

	auxi = *head;
	newsnode = malloc(sizeof(stack_t));
	if (newsnode == NULL)
	{
		printf("Error\n");
	}
	newsnode->n = n;
	newsnode->next = NULL;
	if (auxi)
	{
		while (auxi->next)
			auxi = auxi->next;
	}
	if (!auxi)
	{
		*head = newsnode;
		newsnode->prev = NULL;
	}
	else
	{
		auxi->next = newsnode;
		newsnode->prev = auxi;
	}
}
