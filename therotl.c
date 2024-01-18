#include "monty.h"

/**
 * f_rotl- a function that rotates
 * the stack to the top
 * @head: the stack head
 * @counter: the line_number
 * Return: no return
 */

void f_rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *theaux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	theaux = (*head)->next;
	theaux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = theaux;
}
