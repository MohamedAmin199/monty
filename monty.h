#ifndef MONTY
#define MONTY

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ctype.h>

/**
 * struct stack_s - Doubly linked list.
 * @n: integer.
 * @prev: points to the previous element.
 * @next: points to the next element.
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;


void push(stack_t **stack, int value);
void pall(stack_t **stack);


#endif
