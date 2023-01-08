#include <stdio.h>
#include <stdlib.h>

struct Node {
	int val;
	struct Node *next;	
};

void print_list (struct Node *);

void push_tail (struct Node *, int);
void push_head (struct Node **, int);

void pop_head (struct Node **);
void pop_tail (struct Node *);

void pop_by_index (struct Node **, int);
void pop_by_value (struct Node **, int);

void print_credits ();

int
main (int argc, char *argv[])
{
	struct Node *head = NULL;

	head = (struct Node *) malloc (sizeof(struct Node *));

	if (head == NULL) {
		return 1;
	}

	puts ("Linked list in C.");
	puts ("No arrow operators were used.");
	puts ("");

	puts ("Demonstration:");
	puts ("");

	(*head).val = 2;
	(*head).next = NULL;

	push_tail (head, 3);
	push_head (&head, 1);

	pop_head (&head);
	pop_tail (head);

	push_tail (head, 4);
	push_tail (head, 5);
	push_tail (head, 6);

	pop_by_index (&head, 4);
	pop_by_index (&head, 2);

	pop_by_value (&head, 0);
	pop_by_value (&head, 4);

	push_head (&head, 9);

	pop_by_index (&head, 1);

	puts ("Priting list:");
	print_list (head);

	free(head);

	puts ("");
	puts ("");
	print_credits ();
	puts ("");
	puts ("");

	return 0;
}

void
print_list (struct Node *head)
{
	struct Node *current_node = head;

	while (current_node != NULL)
	{
		printf ("%d\n", (*current_node).val);
		current_node = (*current_node).next;
	}
}

void
push_tail (struct Node *head, int val)
{
	struct Node *current_node = head;
	struct Node *next_node = NULL;

	while ((*current_node).next != NULL)
	{
		current_node = (*current_node).next;
	}

	next_node = (struct Node *) malloc (sizeof(struct Node *));

	(*current_node).next = next_node;
	(*(*current_node).next).val = val;
	(*(*current_node).next).next = NULL;
}

void
push_head (struct Node **head, int val)
{
	struct Node *next_node = NULL;

	next_node = (struct Node *) malloc (sizeof(struct Node *));

	(*next_node).val = val;
	(*next_node).next = *head;

	*head = next_node;
}

void
pop_head (struct Node **head)
{
	struct Node *next_node = NULL;

	next_node = (**head).next;

	free(*head);

	*head = next_node;
}

void
pop_tail (struct Node *head)
{
	struct Node *current_node = head;

	while ( (*(*current_node).next).next != NULL)
	{
		current_node = (*current_node).next;
	}

	(*current_node).next = NULL;

	free ((*current_node).next);
}

void
pop_by_index (struct Node **head, int index)
{
	int i;

	struct Node *current_node = *head;
	struct Node *temporal_node = NULL;

	if (index == 0)
	{
		pop_head (head);
	}
	else
	{

		for (i = 0; i < index - 1; i++)
		{
			if ((*current_node).next == NULL)
			{
				break;
			}

			current_node = (*current_node).next;
		}

		if ((*current_node).next == NULL)
		{
			printf ("Error: Cannot delete node at index: %d, since\n", index);
			puts ("it may NOT exist.");
		}
		else
		{
			temporal_node = (*current_node).next;
			(*current_node).next = (*temporal_node).next;
			free(temporal_node);
		}
	}
}

void
pop_by_value (struct Node **head, int val)
{
	struct Node *current_node = *head;
	struct Node *temporal_node = NULL;

	int found = 0;

	if ((*current_node).val == val)
	{
		pop_head (head);
	}
	else
	{
		while ((*current_node).next != NULL)
		{
			if ( (*(*current_node).next).val == val )
			{
				found = 1;

				break;
			}
			current_node = (*current_node).next;
		}

		if (found == 1)
		{
			temporal_node = (*current_node).next;
			(*current_node).next = (*temporal_node).next;

			free (temporal_node);
		}
	}
}

void
print_credits ()
{
	puts ("Program made by:");
	puts ("https://youtube.com/@CodeNoSchool");
}
