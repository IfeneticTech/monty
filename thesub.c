#include "monty.h"
/**
*f_sub- sustration.
*@head: the stack head.
*@counter: the line_number.
*Return: no return
*/
void f_sub(stack_t **head, unsigned int counter)
{
stack_t *theaux;
int sus, nodes;
theaux = *head;
for (nodes = 0; theaux != NULL; nodes++)
theaux = theaux->next;
if (nodes < 2)
{
fprintf(stderr, "L%d: can't sub, stack too short\n",
counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
theaux = *head;
sus = theaux->next->n - theaux->n;
theaux->next->n = sus;
*head = theaux->next;
free(theaux);
}
