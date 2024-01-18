#include "monty.h"

/**
 * f_push - a function that add node to the stack
 * @head: the stack head
 * @counter: the line_number
 * Return: no return
*/

void f_push(stack_t **head, unsigned int counter)
{
	int b, k = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			k++;
		for (; bus.arg[k] != '\0'; k++)
		{
			if (bus.arg[k] > 57 || bus.arg[k] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	b = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, b);
	else
		addqueue(head, b);
}
