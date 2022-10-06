#include "monty.h"

/**
 * read_file - Function that determines if a file can be opened and read
 * @file_name: The name of the file passed in from start_here.c
 * @head: The beginning of the linked list, passed into the global variable
 * Return: Nothing. Exits if file cannot be opened
 */
void read_file(char *file_name, stack_t **head)
{
	FILE *fp;
	char *command = NULL;
	size_t len = 0;
	int string;
	unsigned int count = 0;

	fp = fopen(file_name, "r");
	if (!fp)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", file_name);
		exit(EXIT_FAILURE);
	}

	while ((string = getline(&command, &len, fp)) != -1)
	{
		command = strtok(command, DELIMIT);
		count++;

		if (command != NULL)
			line_interpreter(head, command, count);
	}

	free(command);
	fclose(fp);
}
