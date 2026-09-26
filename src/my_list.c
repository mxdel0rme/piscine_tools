#include <stdlib.h>
#include "my.h"

struct list *list_push_front(struct list *head, int data)
{
    struct list *node = malloc(sizeof(*node));

    if (!node)
        return head;
    node->data = data;
    node->next = head;
    return node;
}

void list_destroy(struct list *head)
{
    struct list *tmp;

    while (head) {
        tmp = head->next;
        free(head);
        head = tmp;
    }
}
