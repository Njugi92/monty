#include "monty.h"

/**
 * f_rotr- func rotates the stack to the bottom
 * @head: stack head of stack_t linked list
 * @counter: line_number to rotate
 * Return: none
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
stack_t *copy;

copy = *head;

if (*head == NULL || (*head)->next == NULL)
{
return;
}

while (copy->next)
{
copy = copy->next;
}
copy->next = *head;
copy->prev->next = NULL;
copy->prev = NULL;
(*head)->prev = copy;
(*head) = copy;
}
