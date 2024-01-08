#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - To print all the elements of a listint_t list
 * @h: This is a pointer to the head of list
 * Return: A number of nodes
 */
size_t print_listint(const listint_t *h)
{
    const listint_t *current;
    unsigned int C; /* number of nodes */

    current = h;
    C = 0;
    while (current != NULL)
    {
        printf("%i\n", current->C);
        current = current->next;
        C++;
    }

    return (C);
}

/**
 * add_nodeint_end - to adds a new node at the end of a listint_t list
 * @head: pointer to pointer of first node of listint_t list
 * @n: integer to be included in a new node
 * Return: An address of the new element or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new;
    listint_t *current;

    current = *head;

    new = malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;
    new->next = NULL;

    if (*head == NULL)
        *head = new;
    else
    {
        while (current->next != NULL)
            current = current->next;
        current->next = new;
    }

    return (new);
}

/**
 * free_listint - frees a listint_t list
 * @head: pointer to list to be freed
 * Return: void
 */
void free_listint(listint_t *head)
{
    listint_t *current;

    while (head != NULL)
    {
        current = head;
        head = head->next;
        free(current);
    }
}
