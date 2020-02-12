/*
** EPITECH PROJECT, 2019
** memeknaci libmy
** File description:
** print a number
*/

#include <unistd.h>

int my_put_nbr(int nb)
{
    int str = 0;

    if (nb < 0) {
        write(1, "-", 1);
        nb = nb * -1;
    }
    if ((nb >= 0) && (nb < 10)) {
        str = nb + 48;
        write(1, &str, 1);
    }
    if (nb > 9) {
        my_put_nbr(nb/10);
        my_put_nbr(nb%10);
    }
    return (0);
}
