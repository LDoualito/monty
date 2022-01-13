#include "monty.h"
/**
 * free_stack - free element of stack
 * @stack : stack to free
 */
void free_stack(stack_t **stack)
{
	stack_t *tmp;

	tmp = *stack;

	while (*stack != NULL)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}

/**
 * free_array - free array of char
 */

void free_array(void)
{
	int i;

	i = 0;

	while (cmd[i])
	{
		free(cmd[i]);
		cmd[i] = NULL;
		i++;
	}
	free(cmd);
	cmd = NULL;
}
