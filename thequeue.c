#include "monty.h"

/**
 * f_queue - a function that prints the top
 * @head: the stack head
 * @counter: the line_number
 * Return: no return
 */

void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - a function that adds node to the tail stack
 * @n: the new_value
 * @head: the head of the stack
 * Return: no return
 */

void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *theaux;

	theaux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (theaux)
	{
		while (theaux->next)
			theaux = theaux->next;
	}
	if (!theaux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		theaux->next = new_node;
		new_node->prev = theaux;
	}
}
