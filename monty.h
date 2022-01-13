#ifndef MONTY_H
#define MONTY_H
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
extern char **cmd;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* stack functions */
void push_stack(stack_t **stack, unsigned int nline);
void pall_stack(stack_t **stack, unsigned int nline);
void pint_stack(stack_t **stack, unsigned int nline);
void pop_stack(stack_t **stack, unsigned int nline);
void swap_stack(stack_t **stack, unsigned int nline);
void add_stack(stack_t **stack, unsigned int nline);
void nop_stack(stack_t **stack, unsigned int nline);
void sub_stack(stack_t **stack, unsigned int nline);
void div_stack(stack_t **stack, unsigned int nline);
void mul_stack(stack_t **stack, unsigned int nline);
void mod_stack(stack_t **stack, unsigned int nline);
/* strtow */
char **strtow(char *str);
int _countword(char *str);
int _checkspace(char *str, int i);
char *_strndup(char *str, int n);
int _isdigit(int c);
int _isnumber(char *str);
/* free */
void free_stack(stack_t **stack);
void free_array(void);
int empty_line(char *line);
/* error */
int malloc_error(void);
int open_error(char *str);
int arg_error(void);
int int_error(unsigned int nline);
int pint_error(unsigned int nline);
int pop_error(unsigned int nline);
int invalid_error(char *str, unsigned int nline);
int swap_error(unsigned int nline);
int add_error(unsigned int nline);
int sub_error(unsigned int nline);
int div_error(unsigned int nline);
int div_error_zero(unsigned int nline);
int mul_error(unsigned int nline);
int mod_error(unsigned int nline);
/* monty.c */
int exec_monty(FILE *file_d);
void (*get_op(char *opcode))(stack_t **, unsigned int);

#endif
