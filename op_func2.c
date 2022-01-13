#include "monty.h"
/**
 * add_stack - add 2 element at top of stack
 * @stack: stack
 * @nline: line number
 */
void add_stack(stack_t **stack, unsigned int nline)
{
	if ((*stack) == NULL || (*stack)->next == NULL)
		add_error(nline);
	(*stack)->next->n += (*stack)->n;
	pop_stack(stack, nline);
}

/**
 * nop_stack - do nothing
 * @stack: stack
 * @nline: line number
 */

void nop_stack(stack_t **stack, unsigned int nline)
{
	(void)stack;
	(void)nline;
}

/**
 * sub_stack - substract
 * @stack: stack
 * @nline: line number
 */

void sub_stack(stack_t **stack, unsigned int nline)
{
	if ((*stack) == NULL || (*stack)->next == NULL)
		sub_error(nline);
	(*stack)->next->n -= (*stack)->n;
	pop_stack(stack, nline);
}

/**
 * div_stack - divide
 * @stack: stack
 * @nline: line number
 */
void div_stack(stack_t **stack, unsigned int nline)
{
	if ((*stack) == NULL || (*stack)->next == NULL)
		div_error(nline);
	if ((*stack)->n == 0)
		div_error_zero(nline);
	(*stack)->next->n /= (*stack)->n;
	pop_stack(stack, nline);
}

/**
 * mul_stack - mul 2 element at top of stack
 * @stack: stack
 * @nline: line number
 */

void mul_stack(stack_t **stack, unsigned int nline)
{
	if ((*stack) == NULL || (*stack)->next == NULL)
		mul_error(nline);
	(*stack)->next->n *= (*stack)->n;
	pop_stack(stack, nline);
}
