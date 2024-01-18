#include "monty.h"
/**
* free_stack - function that frees a doubly linked list
* @head: the head of the stack
*/
void free_stack(stack_t *head)
{
stack_t *theaux;
theaux = head;
while (head)
{
theaux = head->next;
free(head);
head = theaux;
}
}
