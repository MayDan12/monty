#include "monty.h"
#include <stdio.h>

bus_t bus = {NULL, NULL, NULL, 0};
/**
* main - This is the monty code interpreter function
* @argc: The total number of arguments
* @argv: The monty file location
* written by Damiel Mayowa || Moses Iluyemi
* Return: 0 on success and -1 if failed
*/
int main(int argc, char *argv[])
{
	char *contents;
	FILE *files;
	size_t sizes = 0;
	ssize_t read_lines = 1;
	stack_t *stacks = NULL;
	unsigned int counters = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	files = fopen(argv[1], "r");
	bus.file = files;
	if (!files)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_lines > 0)
	{
		contents = NULL;
		read_lines = getline(&contents, &sizes, files);
		bus.content = contents;
		counters++;
		if (read_lines > 0)
		{
			execute(contents, &stacks, counters, files);
		}
		free(contents);
	}
	free_stack(stacks);
	fclose(files);

	return (0);
}
