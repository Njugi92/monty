#include "monty.h"

/**
 * f_add - function adds the top two elements of the stack.
 * @head: stack head of stack_t linked list
 * @counter: line_number to add in stack_t linked list
 * Return: none
 */
void f_add(stack_t **head, unsigned int counter)
{
stack_t *h;
int len = 0, aux;

h = *head;

while (h)
{
h = h->next;
len++;
}

if (len < 2)
{
fprintf(stderr, "L%d: can't add, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
h = *head;
aux = h->n + h->next->n;
h->next->n = aux;
*head = h->next;
free(h);
}
