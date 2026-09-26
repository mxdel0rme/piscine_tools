#include "my.h"

char *my_strcpy(char *dest, const char *src)
{
    size_t i = 0;

    for (; src[i]; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}
