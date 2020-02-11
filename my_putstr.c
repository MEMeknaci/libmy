/*
** EPITECH PROJECT, 2019
** memeknaci libmy
** File description:
** print a full string
*/

#include <unistd.h>

int my_putstr(char const *str)
{
    int count = 0;

    for (int i = 0; str[i]; i++)
        count++;
    write(1, str, count);
    return (0);
}
