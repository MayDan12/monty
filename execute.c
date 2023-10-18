#include "monty.h"
/**
* execute - This is the function that executes the opcode
* @stack: The head linked list - stack
* @counter: This is the line_counter
* @file: The poiterner to monty file
* @content: The line content Used
* Return: return Nothing always (1)
*/
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", f_nop},
				{"sub", f_sub},
				{"div", f_div},
				{"mul", f_mul},
				{"mod", f_mod},
				{"pchar", f_pchar},
				{"pstr", f_pstr},
				{"rotl", f_rotl},
				{"rotr", f_rotr},
				{"queue", f_queue},
				{"stack", f_stack},
				{NULL, NULL}
				};
	unsigned int z = 0;
	char *opco;

	opco = strtok(content, " \n\t");
	if (opco && opco[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[z].opcode && opco)
	{
		if (strcmp(opco, opst[z].opcode) == 0)
		{	opst[z].f(stack, counter);
			return (0);
		}
		z++;
	}
	if (opco && opst[z].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, opco);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
