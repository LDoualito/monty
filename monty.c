#include "monty.h"
#include<stdio.h>
/**
 * get_op - search function for opcode
 * @opcode: opcode to check
 * Return: pointer to function of NULL
 */
void (*get_op(char *opcode))(stack_t **, unsigned int)
{
	instruction_t funcs[] = {
		{"push", push_stack},
		{"pall", pall_stack},
		{"pint", pint_stack},
		{"pop", pop_stack},
		{"swap", swap_stack},
		{"add", add_stack},
		{"nop", nop_stack},
		{"sub", sub_stack},
		{"div", div_stack},
		{"mul", mul_stack},
		{"mod", mod_stack},
	};
	int i = 0;

	while (i < 11)
	{
		if (strcmp(opcode, funcs[i].opcode) == 0)
			return (funcs[i].f);
		i++;
	}
	return (NULL);
}
/**
 * empty_line - check for empty line
 * @line: line to check
 * Return: 0 if empty else 1
 */
int empty_line(char *line)
{
	int i = 0;

	while (line[i] == ' ' || line[i] == '\t'
			|| line[i] == '\n' || line[i] == '\a'
			|| line[i] == '\b' || line[i] == '\r')
		i++;
	if (line[i] == '\0')
		return (0);
	return (1);
}
/**
 * exec_monty - function to exec program
 * @file_d: file descriptor
 * Return: exit status
 */
int exec_monty(FILE *file_d)
{
	char *line = NULL;
	stack_t *stack = NULL;
	size_t lenght = 0;
	int nline = 0;
	void (*func)(stack_t **, unsigned int);
	int end = 0;

	while (getline(&line, &lenght, file_d) > 0)
	{
		nline++;
		cmd = strtow(line);
		if (!cmd)
		{
			if (empty_line(line) == 0)
				continue;
			free_stack(&stack);
			return (malloc_error());
		}
		else if (cmd[0][0] == '#')
		{
			free_array();
			continue;
		}
		func = get_op(cmd[0]);
		if (func == 0)
		{
			free_stack(&stack);
			end = invalid_error(cmd[0], nline);
			free_array();
			break;
		}
		func(&stack, nline);
		free_array();
	}
	free_stack(&stack);
	free(line);
	return (end);
}
