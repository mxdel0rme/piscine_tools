#include <unistd.h>
#include "my.h"

void my_putnbr(int n)
{
    long nb = n;
    char c;

    if (nb < 0) {
        write(1, "-", 1);
        nb = -nb;
    }
    if (nb >= 10)
        my_putnbr(nb / 10);
    c = '0' + nb % 10;
    write(1, &c, 1);
}
