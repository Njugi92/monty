#include "monty.h"

/**
 * f_rotl- func rotates the stack to the top
 * @head: stack head of stack_t linked list
 * @counter: line_number to rotate
 * Return: none
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
stack_t *tmp = *head, *aux;

if (*head == NULL || (*head)->next == NULL)
{
return;
}
aux = (*head)->next;
aux->prev = NULL;

while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = *head;
(*head)->next = NULL;
(*head)->prev = tmp;
(*head) = aux;
}
