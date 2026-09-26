#include <limits.h>
#include "my.h"

int my_atoi(const char *s)
{
    int sign = 1;
    long res = 0;

    while (*s == ' ' || (*s >= '\t' && *s <= '\r'))
        s++;
    if (*s == '-' || *s == '+')
        sign = (*s++ == '-') ? -1 : 1;
    while (*s >= '0' && *s <= '9') {
        res = res * 10 + (*s++ - '0');
        if (sign == 1 && res > INT_MAX)
            return INT_MAX;
        if (sign == -1 && -res < INT_MIN)
            return INT_MIN;
    }
    return (int)(res * sign);
}
