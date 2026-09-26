#ifndef MY_H
#define MY_H

#include <stddef.h>

size_t my_strlen(const char *s);
char *my_strcpy(char *dest, const char *src);

void my_putnbr(int n);

int my_atoi(const char *s);

struct list {
    int data;
    struct list *next;
};

struct list *list_push_front(struct list *head, int data);
void list_destroy(struct list *head);

#endif /* !MY_H */
