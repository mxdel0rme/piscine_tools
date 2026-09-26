#include <assert.h>
#include <string.h>
#include "my.h"

int main(void)
{
    char buf[32];
    struct list *l = NULL;

    assert(my_strlen("piscine") == 7);
    assert(strcmp(my_strcpy(buf, "epita"), "epita") == 0);
    assert(my_atoi("  -42") == -42);
    assert(my_atoi("99999999999") == 2147483647);
    l = list_push_front(l, 1);
    l = list_push_front(l, 2);
    assert(l->data == 2 && l->next->data == 1);
    list_destroy(l);
    my_putnbr(42);
    return 0;
}
