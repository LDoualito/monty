#include "monty.h"
/**
 * mod_stack - mod 2 element at top of stack
 * @stack: stack
 * @nline: line number
 */
void mod_stack(stack_t **stack, unsigned int nline)
{
	if ((*stack) == NULL || (*stack)->next == NULL)
		mod_error(nline);
	if ((*stack)->n == 0)
		div_error_zero(nline);
	(*stack)->next->n %= (*stack)->n;
	pop_stack(stack, nline);
}

