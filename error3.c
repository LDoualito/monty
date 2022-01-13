#include "monty.h"

/**
 * div_error_zero - div by 0
 * @nline: line number
 * Return: Exit failure
 */
int div_error_zero(unsigned int nline)
{
	fprintf(stderr, "L%u: division by zero\n", nline);
	exit(EXIT_FAILURE);
}

/**
 * mul_error - error
 * @nline: line number
 * Return: Exit failure
 */

int mul_error(unsigned int nline)
{
	fprintf(stderr, "L%u: can't mul, stack too short\n", nline);
		exit(EXIT_FAILURE);
}

/**
 * mod_error - error
 * @nline: line number
 * Return: Exit failure
 */

int mod_error(unsigned int nline)
{
	fprintf(stderr, "L%u: can't mod, stack too short\n", nline);
		exit(EXIT_FAILURE);
}

/**
 * div_error - print error
 * @nline: nline
 * Return: Exit failure
 */
int div_error(unsigned int nline)
{
	fprintf(stderr, "L%u: can't div, stack too short\n", nline);
	exit(EXIT_FAILURE);
}

