#include "monty.h"
/**
 * push_stack - push new element at top of stack
 * @stack: stack
 * @nline: line number
 */

void push_stack(stack_t **stack, unsigned int nline)
{
	stack_t *newnode;
	int value;

	newnode = malloc(sizeof(stack_t));
	if (!newnode)
	{
		malloc_error();
	}
	if (!cmd[1])
	{
		int_error(nline);
	}
	else if (_isnumber(cmd[1]) == 0)
	{
		int_error(nline);
	}
	value = atoi(cmd[1]);
	if (value < 0)
		value = value * -1;
	newnode->n = value;
	newnode->prev = NULL;
	newnode->next = (*stack);
	if ((*stack) != NULL)
		(*stack)->prev = newnode;
	(*stack) = newnode;
}
/**
 * pall_stack - print elements of the stack
 * @stack: stack
 * @nline: line number
 */

void pall_stack(stack_t **stack, unsigned int nline)
{
	stack_t *tmp;

	tmp = *stack;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	(void)nline;
}
/**
 * pint_stack - print element at top of stack
 * @stack: stack
 * @nline: line number
 */

void pint_stack(stack_t **stack, unsigned int nline)
{
	if ((*stack) == NULL)
		pint_error(nline);
	else
		printf("%d\n", (*stack)->n);
}
/**
 * pop_stack - pop element at top of stack
 * @stack: stack
 * @nline: line number
 */

void pop_stack(stack_t **stack, unsigned int nline)
{
	stack_t *tmp;

	tmp = *stack;

	if ((*stack) == NULL)
		pop_error(nline);
	tmp = tmp->next;
	free(*stack);
	*stack = tmp;
	if (tmp != NULL)
		(*stack)->prev = NULL;
}
/**
 * swap_stack - swap 2 element's value at top of stack
 * @stack: stack
 * @nline: line number
 */

void swap_stack(stack_t **stack, unsigned int nline)
{
	int n = 0;

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		swap_error(nline);
	}
	n = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = n;
}
