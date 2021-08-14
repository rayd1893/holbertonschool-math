#include "fibonacci.h"

/**
 * push - Add new node
 * @head_ref: List
 * @new_data: New data to add in list
 *
 * Return: Nothing
 */
void push(t_cell **head_ref, double new_data)
{
	t_cell *new_node = malloc(sizeof(t_cell));

	if (new_node == NULL)
	{
		free(new_node);
		return;
	}

	new_node->elt  = new_data;

	new_node->next = (*head_ref);

	(*head_ref)    = new_node;
}

/**
 * Fibonacci - Sequence fibonacci
 *
 * Return: Linked list t_cell
 */
t_cell *Fibonnaci()
{
	t_cell *h;
	int i = 2;
	int x0 = 1;
	int x1 = 1;
	int x;

	h = malloc(sizeof(t_cell));

	if (h == NULL)
	{
		free(h);
		return (NULL);
	}

	h->elt = x0;

	push(&h, x1);

	while (i < 20)
	{
		x = x0 + x1;
		push(&h, x);
		x0 = x1;
		x1 = x;
		i++;
	}

	return (h);
}

/**
 * gold_number - Calculate gold number
 * @head: Linked list
 *
 * Return: Gold number
 */
double gold_number(t_cell *head)
{
	double number;
	double x0, x1;

	x0 = head->elt;
	head = head->next;

	x1 = head->elt;
	number = x1 / x0;

	return (number);
}
