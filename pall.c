#include "monty.h"

/**
 * f_pall - func prints the stack
 * @head: stack head of stack_t linked list
 * @counter: no use
 * Return: NONE
 */
void f_pall(stack_t **head, unsigned int counter)
{
stack_t *h;
(void)counter;

h = *head;

if (h == NULL)
return;

while (h)
{
printf("%d\n", h->n);
h = h->next;
}
}
