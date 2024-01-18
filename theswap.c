#include "monty.h"

/**
 * f_swap - a function that adds the top
 * two elements of the stack.
 * @head: the stack head
 * @counter: the line_number
 * Return: no return
 */

void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, theaux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	theaux = h->n;
	h->n = h->next->n;
	h->next->n = theaux;
}
