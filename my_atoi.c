/*
65;5604;1c** EPITECH PROJECT, 2019
** memeknaci libmy
** File description:
** get a number from a string
*/

#include <stdlib.h>

int my_atoi(char const *nptr)
{
    int nb = 0;
    int count = 0;
    int n = 1;

    if (nptr == NULL)
        return (0);
    for (; (*nptr < 47 || *nptr > 58) && *nptr != 0; nptr++)
        count++;
    if (count > 0 && *(nptr-1) == 45)
        n = -1;
    for (; *nptr >= 48 && *nptr <= 57 && *nptr != 0; nptr++) {
        nb *= 10;
        nb += *nptr - 48;
    }
    nb *= n;
    return (nb);
}
